#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QSerialPort *serialport;

private slots:
    void on_comopen_clicked();

    void on_comclose_clicked();

    void on_sendBt_clicked();

    void on_clearBt_clicked();
    void serialport_read_show();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
