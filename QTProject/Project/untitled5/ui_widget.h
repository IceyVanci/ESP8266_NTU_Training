/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *massage_send_Edit;
    QPushButton *comclose;
    QPushButton *comopen;
    QPlainTextEdit *massage_recelive_Edit;
    QLabel *label_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *Com_port;
    QLabel *com;
    QComboBox *Baud_rate;
    QLabel *baud;
    QComboBox *Data_bit;
    QLabel *data;
    QComboBox *Stop_bit;
    QLabel *stop;
    QComboBox *Check_bit;
    QLabel *check;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *clearBt;
    QPushButton *sendBt;
    QLabel *label_2;
    QLabel *label_10;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1296, 675);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        massage_send_Edit = new QLineEdit(Widget);
        massage_send_Edit->setObjectName("massage_send_Edit");
        massage_send_Edit->setGeometry(QRect(720, 330, 411, 43));
        massage_send_Edit->setMinimumSize(QSize(356, 43));
        massage_send_Edit->setStyleSheet(QString::fromUtf8("border-color:rgb(255, 255, 255)"));
        comclose = new QPushButton(Widget);
        comclose->setObjectName("comclose");
        comclose->setGeometry(QRect(820, 410, 65, 65));
        comclose->setMinimumSize(QSize(65, 65));
        comclose->setStyleSheet(QString::fromUtf8("border-image: url(:/5585233.png);"));
        comopen = new QPushButton(Widget);
        comopen->setObjectName("comopen");
        comopen->setGeometry(QRect(730, 410, 65, 65));
        comopen->setMinimumSize(QSize(65, 65));
        comopen->setStyleSheet(QString::fromUtf8("border-image: url(:/5728139.png);"));
        massage_recelive_Edit = new QPlainTextEdit(Widget);
        massage_recelive_Edit->setObjectName("massage_recelive_Edit");
        massage_recelive_Edit->setGeometry(QRect(160, 90, 322, 422));
        massage_recelive_Edit->setMinimumSize(QSize(322, 422));
        massage_recelive_Edit->setMaximumSize(QSize(341, 411));
        massage_recelive_Edit->setStyleSheet(QString::fromUtf8(""));
        massage_recelive_Edit->setReadOnly(true);
        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(830, 480, 101, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_7->setFont(font);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(720, 90, 181, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Com_port = new QComboBox(layoutWidget);
        Com_port->setObjectName("Com_port");

        gridLayout->addWidget(Com_port, 0, 0, 1, 1);

        com = new QLabel(layoutWidget);
        com->setObjectName("com");
        com->setMaximumSize(QSize(55, 38));
        QFont font1;
        font1.setBold(true);
        com->setFont(font1);

        gridLayout->addWidget(com, 0, 1, 1, 1);

        Baud_rate = new QComboBox(layoutWidget);
        Baud_rate->addItem(QString());
        Baud_rate->addItem(QString());
        Baud_rate->setObjectName("Baud_rate");

        gridLayout->addWidget(Baud_rate, 1, 0, 1, 1);

        baud = new QLabel(layoutWidget);
        baud->setObjectName("baud");
        baud->setMaximumSize(QSize(55, 38));
        baud->setFont(font1);

        gridLayout->addWidget(baud, 1, 1, 1, 1);

        Data_bit = new QComboBox(layoutWidget);
        Data_bit->addItem(QString());
        Data_bit->addItem(QString());
        Data_bit->addItem(QString());
        Data_bit->addItem(QString());
        Data_bit->setObjectName("Data_bit");

        gridLayout->addWidget(Data_bit, 2, 0, 1, 1);

        data = new QLabel(layoutWidget);
        data->setObjectName("data");
        data->setMaximumSize(QSize(55, 38));
        data->setFont(font1);

        gridLayout->addWidget(data, 2, 1, 1, 1);

        Stop_bit = new QComboBox(layoutWidget);
        Stop_bit->addItem(QString());
        Stop_bit->addItem(QString());
        Stop_bit->addItem(QString());
        Stop_bit->setObjectName("Stop_bit");

        gridLayout->addWidget(Stop_bit, 3, 0, 1, 1);

        stop = new QLabel(layoutWidget);
        stop->setObjectName("stop");
        stop->setMaximumSize(QSize(55, 38));
        stop->setFont(font1);

        gridLayout->addWidget(stop, 3, 1, 1, 1);

        Check_bit = new QComboBox(layoutWidget);
        Check_bit->addItem(QString());
        Check_bit->setObjectName("Check_bit");

        gridLayout->addWidget(Check_bit, 4, 0, 1, 1);

        check = new QLabel(layoutWidget);
        check->setObjectName("check");
        check->setMaximumSize(QSize(55, 38));
        check->setFont(font1);
        check->setStyleSheet(QString::fromUtf8("border-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(check, 4, 1, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(910, 110, 301, 171));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/1.png);"));
        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(730, 490, 91, 31));
        label_8->setFont(font);
        label_9 = new QLabel(Widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(930, 490, 81, 31));
        label_9->setFont(font);
        clearBt = new QPushButton(Widget);
        clearBt->setObjectName("clearBt");
        clearBt->setGeometry(QRect(1010, 410, 65, 65));
        clearBt->setMinimumSize(QSize(65, 65));
        clearBt->setStyleSheet(QString::fromUtf8("border-image: url(:/6285088.png);"));
        sendBt = new QPushButton(Widget);
        sendBt->setObjectName("sendBt");
        sendBt->setGeometry(QRect(920, 410, 64, 64));
        sendBt->setMinimumSize(QSize(64, 64));
        sendBt->setStyleSheet(QString::fromUtf8("border-image: url(:/6588923.png);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-40, 0, 1341, 681));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/94219763_p0.png);"));
        label_10 = new QLabel(Widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1030, 490, 81, 31));
        label_10->setFont(font);
        label_2->raise();
        massage_send_Edit->raise();
        comclose->raise();
        comopen->raise();
        massage_recelive_Edit->raise();
        label_7->raise();
        layoutWidget->raise();
        label->raise();
        label_8->raise();
        label_9->raise();
        clearBt->raise();
        sendBt->raise();
        label_10->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Group_5", nullptr));
        comclose->setText(QString());
        comopen->setText(QString());
        massage_recelive_Edit->setDocumentTitle(QCoreApplication::translate("Widget", "Group5", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        com->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        Baud_rate->setItemText(0, QCoreApplication::translate("Widget", "9600", nullptr));
        Baud_rate->setItemText(1, QCoreApplication::translate("Widget", "115200", nullptr));

        Baud_rate->setCurrentText(QCoreApplication::translate("Widget", "9600", nullptr));
        baud->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        Data_bit->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        Data_bit->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        Data_bit->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        Data_bit->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));

        Data_bit->setCurrentText(QCoreApplication::translate("Widget", "5", nullptr));
        data->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        Stop_bit->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        Stop_bit->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        Stop_bit->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        stop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        Check_bit->setItemText(0, QCoreApplication::translate("Widget", "no", nullptr));

        check->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        label->setText(QString());
        label_8->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        clearBt->setText(QString());
        sendBt->setText(QString());
        label_2->setText(QString());
        label_10->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
