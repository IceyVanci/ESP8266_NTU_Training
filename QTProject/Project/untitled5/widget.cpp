#include "widget.h"
#include "ui_widget.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QSerialPortInfo>
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    serialport=new QSerialPort(this);
    connect(serialport,SIGNAL(readyRead()),this,SLOT(serialport_read_show()));
    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        QStringList Portname;
        Portname<<info.portName();
        ui->Com_port->addItems(Portname);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::serialport_read_show(){
    QString buf;
    buf=QString(serialport->readAll());
    ui->massage_recelive_Edit->appendPlainText( buf);
}
void Widget::on_comopen_clicked()
{
    qDebug("Group5_Open");
/***定义变量****/
    QSerialPort::BaudRate   Baudrate;
    QSerialPort::DataBits   Datebits;
    QSerialPort::StopBits   Stopbits;
    QSerialPort::Parity     Checkbit;

//波特率
    if(ui->Baud_rate->currentText()=="9600"){
        Baudrate=QSerialPort::Baud9600;
    }else if (ui->Baud_rate->currentText()=="115200") {
        Baudrate=QSerialPort::Baud115200;
    }
//数据位
    if(ui->Data_bit->currentText()=="5"){
        Datebits=QSerialPort::Data5;
    }else if (ui->Data_bit->currentText()=="6") {
        Datebits=QSerialPort::Data6;
    }else if (ui->Data_bit->currentText()=="7") {
        Datebits=QSerialPort::Data7;
    }else if (ui->Data_bit->currentText()=="8") {
        Datebits=QSerialPort::Data8;
    }
//停止位
    if(ui->Stop_bit->currentText()=="1"){
        Stopbits=QSerialPort::OneStop;
    }else if (ui->Stop_bit->currentText()=="1.5") {
        Stopbits=QSerialPort::OneAndHalfStop;
    }else if (ui->Stop_bit->currentText()=="2") {
        Stopbits=QSerialPort::TwoStop;
    }
//校验位
    if(ui->Check_bit->currentText()=="无"){
        Checkbit=QSerialPort::NoParity;
    }

    QStringList Portname;//portname：最终显示在串口下拉框的内容，例如COM1

    foreach (const QSerialPortInfo &info , QSerialPortInfo::availablePorts()){
        Portname<<info.portName();
    }//获取过程


    serialport->setBaudRate(Baudrate);
    serialport->setDataBits(Datebits);
    serialport->setStopBits(Stopbits);
    serialport->setParity(Checkbit);
  // serialport->setPort(Portname);
    serialport->setPortName(ui->Com_port->currentText());


//    QStringList portname;//portname：最终显示在串口下拉框的内容，例如COM1
//    QSerialPortInfo selectedInfo;
//    foreach (const QSerialPortInfo &info , QSerialPortInfo::availablePorts()){
//        if (ui->Number_port->currentText() == info.portName()) {
//            selectedInfo = info;
//            break;
//        }

//    }//获取过程
//    //qDebug() << ui->Number_port->currentText();
//    serialport->setPort(selectedInfo);



    if(serialport->open(QIODevice::ReadWrite)){
    QMessageBox::information(this,"打开","成功");
    }else{
    QMessageBox::information(this,"打开","重复");
    }

}


void Widget::on_comclose_clicked()
{
    qDebug("Group5_Close");
    serialport->close();
    QMessageBox::information(this,"关闭","成功");

}


void Widget::on_sendBt_clicked()
{
    qDebug("Group5_send");
    serialport->write(ui->massage_send_Edit->text().toLocal8Bit().data());

}


void Widget::on_clearBt_clicked()
{
    qDebug("Group5_Clr");
    ui->massage_recelive_Edit->clear();
}


