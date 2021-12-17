/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *money_label;
    QPushButton *click_button;
    QLabel *label_3;
    QLabel *trader_price;
    QPushButton *trader_buy;
    QLabel *gpu_price;
    QPushButton *gpu_buy;
    QLabel *rig_price;
    QPushButton *rig_buy;
    QLabel *locked_1;
    QLabel *locked_text_1;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *trader_quant;
    QLabel *gpu_quant;
    QLabel *rig_quant;
    QLabel *gpu;
    QLabel *locked_2;
    QLabel *locked_text_2;
    QLabel *locked_text_3;
    QLabel *locked_text_4;
    QLabel *locked_text_5;
    QLabel *locked_text_6;
    QLabel *locked_text_7;
    QLabel *locked_text_8;
    QLabel *trader;
    QLabel *mining_rig;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 500);
        MainWindow->setMinimumSize(QSize(900, 500));
        MainWindow->setMaximumSize(QSize(900, 500));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/resources/images/main_background.png)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 351, 201));
        label->setStyleSheet(QString::fromUtf8("border: 0;\n"
"border-image: none;\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/money_background.png")));
        label->setScaledContents(true);
        money_label = new QLabel(centralwidget);
        money_label->setObjectName(QString::fromUtf8("money_label"));
        money_label->setGeometry(QRect(160, 78, 100, 31));
        money_label->setMinimumSize(QSize(100, 20));
        money_label->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        click_button = new QPushButton(centralwidget);
        click_button->setObjectName(QString::fromUtf8("click_button"));
        click_button->setGeometry(QRect(140, 130, 111, 71));
        click_button->setCursor(QCursor(Qt::PointingHandCursor));
        click_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 20pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button_shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 18pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button.png);\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 10, 511, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/upgrade_background.png")));
        label_3->setScaledContents(true);
        trader_price = new QLabel(centralwidget);
        trader_price->setObjectName(QString::fromUtf8("trader_price"));
        trader_price->setGeometry(QRect(434, 142, 100, 31));
        trader_price->setMinimumSize(QSize(100, 20));
        trader_price->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 16pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        trader_buy = new QPushButton(centralwidget);
        trader_buy->setObjectName(QString::fromUtf8("trader_buy"));
        trader_buy->setGeometry(QRect(492, 142, 50, 30));
        trader_buy->setCursor(QCursor(Qt::PointingHandCursor));
        trader_buy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 14pt \"Minecraft\" ;\n"
"	border-image: url(:/assets/resources/images/button_shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button.png);\n"
"}\n"
""));
        gpu_price = new QLabel(centralwidget);
        gpu_price->setObjectName(QString::fromUtf8("gpu_price"));
        gpu_price->setGeometry(QRect(602, 142, 100, 31));
        gpu_price->setMinimumSize(QSize(100, 20));
        gpu_price->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 16pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        gpu_buy = new QPushButton(centralwidget);
        gpu_buy->setObjectName(QString::fromUtf8("gpu_buy"));
        gpu_buy->setGeometry(QRect(656, 142, 50, 30));
        gpu_buy->setCursor(QCursor(Qt::PointingHandCursor));
        gpu_buy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 14pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button_shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button.png);\n"
"}\n"
""));
        rig_price = new QLabel(centralwidget);
        rig_price->setObjectName(QString::fromUtf8("rig_price"));
        rig_price->setGeometry(QRect(772, 142, 100, 31));
        rig_price->setMinimumSize(QSize(100, 20));
        rig_price->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 16pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        rig_buy = new QPushButton(centralwidget);
        rig_buy->setObjectName(QString::fromUtf8("rig_buy"));
        rig_buy->setGeometry(QRect(822, 142, 50, 30));
        rig_buy->setCursor(QCursor(Qt::PointingHandCursor));
        rig_buy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 14pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button_shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt \"Minecraft\";\n"
"	border-image: url(:/assets/resources/images/button.png);\n"
"}\n"
""));
        locked_1 = new QLabel(centralwidget);
        locked_1->setObjectName(QString::fromUtf8("locked_1"));
        locked_1->setGeometry(QRect(444, 200, 51, 41));
        locked_1->setStyleSheet(QString::fromUtf8("border-image: none;"));
        locked_1->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/locked.png")));
        locked_1->setScaledContents(true);
        locked_text_1 = new QLabel(centralwidget);
        locked_text_1->setObjectName(QString::fromUtf8("locked_text_1"));
        locked_text_1->setGeometry(QRect(432, 254, 100, 31));
        locked_text_1->setMinimumSize(QSize(100, 20));
        locked_text_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 270, 351, 51));
        label_9->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/button.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 320, 351, 51));
        label_10->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/button.png")));
        label_10->setScaledContents(true);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 220, 351, 51));
        label_12->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/button.png")));
        label_12->setScaledContents(true);
        trader_quant = new QLabel(centralwidget);
        trader_quant->setObjectName(QString::fromUtf8("trader_quant"));
        trader_quant->setGeometry(QRect(40, 230, 321, 31));
        trader_quant->setMinimumSize(QSize(100, 20));
        trader_quant->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        gpu_quant = new QLabel(centralwidget);
        gpu_quant->setObjectName(QString::fromUtf8("gpu_quant"));
        gpu_quant->setGeometry(QRect(40, 280, 321, 31));
        gpu_quant->setMinimumSize(QSize(100, 20));
        gpu_quant->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        rig_quant = new QLabel(centralwidget);
        rig_quant->setObjectName(QString::fromUtf8("rig_quant"));
        rig_quant->setGeometry(QRect(40, 330, 321, 31));
        rig_quant->setMinimumSize(QSize(100, 20));
        rig_quant->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        gpu = new QLabel(centralwidget);
        gpu->setObjectName(QString::fromUtf8("gpu"));
        gpu->setGeometry(QRect(600, 90, 81, 51));
        gpu->setStyleSheet(QString::fromUtf8("border-image: none;\n"
""));
        gpu->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/gpu.png")));
        gpu->setScaledContents(true);
        locked_2 = new QLabel(centralwidget);
        locked_2->setObjectName(QString::fromUtf8("locked_2"));
        locked_2->setGeometry(QRect(610, 200, 51, 41));
        locked_2->setStyleSheet(QString::fromUtf8("border-image: none;"));
        locked_2->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/locked.png")));
        locked_2->setScaledContents(true);
        locked_text_2 = new QLabel(centralwidget);
        locked_text_2->setObjectName(QString::fromUtf8("locked_text_2"));
        locked_text_2->setGeometry(QRect(600, 254, 100, 31));
        locked_text_2->setMinimumSize(QSize(100, 20));
        locked_text_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        locked_text_3 = new QLabel(centralwidget);
        locked_text_3->setObjectName(QString::fromUtf8("locked_text_3"));
        locked_text_3->setGeometry(QRect(425, 315, 101, 31));
        locked_text_3->setMinimumSize(QSize(100, 20));
        locked_text_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #ffffff;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        locked_text_4 = new QLabel(centralwidget);
        locked_text_4->setObjectName(QString::fromUtf8("locked_text_4"));
        locked_text_4->setGeometry(QRect(590, 315, 101, 31));
        locked_text_4->setMinimumSize(QSize(100, 20));
        locked_text_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #ffffff;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        locked_text_5 = new QLabel(centralwidget);
        locked_text_5->setObjectName(QString::fromUtf8("locked_text_5"));
        locked_text_5->setGeometry(QRect(760, 315, 101, 31));
        locked_text_5->setMinimumSize(QSize(100, 20));
        locked_text_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #ffffff;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        locked_text_6 = new QLabel(centralwidget);
        locked_text_6->setObjectName(QString::fromUtf8("locked_text_6"));
        locked_text_6->setGeometry(QRect(600, 350, 100, 31));
        locked_text_6->setMinimumSize(QSize(100, 20));
        locked_text_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        locked_text_7 = new QLabel(centralwidget);
        locked_text_7->setObjectName(QString::fromUtf8("locked_text_7"));
        locked_text_7->setGeometry(QRect(430, 350, 100, 31));
        locked_text_7->setMinimumSize(QSize(100, 20));
        locked_text_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        locked_text_8 = new QLabel(centralwidget);
        locked_text_8->setObjectName(QString::fromUtf8("locked_text_8"));
        locked_text_8->setGeometry(QRect(770, 350, 100, 31));
        locked_text_8->setMinimumSize(QSize(100, 20));
        locked_text_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        trader = new QLabel(centralwidget);
        trader->setObjectName(QString::fromUtf8("trader"));
        trader->setGeometry(QRect(450, 90, 51, 41));
        trader->setStyleSheet(QString::fromUtf8("border-image: none;\n"
""));
        trader->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/trade.png")));
        trader->setScaledContents(true);
        mining_rig = new QLabel(centralwidget);
        mining_rig->setObjectName(QString::fromUtf8("mining_rig"));
        mining_rig->setGeometry(QRect(760, 90, 81, 51));
        mining_rig->setStyleSheet(QString::fromUtf8("border-image: none;\n"
""));
        mining_rig->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/images/mining rig.png")));
        mining_rig->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        money_label->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        click_button->setText(QCoreApplication::translate("MainWindow", "CLICK!", nullptr));
        label_3->setText(QString());
        trader_price->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        trader_buy->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        gpu_price->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        gpu_buy->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        rig_price->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        rig_buy->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        locked_1->setText(QString());
        locked_text_1->setText(QCoreApplication::translate("MainWindow", "LOCKED", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_12->setText(QString());
        trader_quant->setText(QCoreApplication::translate("MainWindow", "TRADERS: 0", nullptr));
        gpu_quant->setText(QCoreApplication::translate("MainWindow", "GPUs: 0", nullptr));
        rig_quant->setText(QCoreApplication::translate("MainWindow", "MINING RIGs: 0", nullptr));
        gpu->setText(QString());
        locked_2->setText(QString());
        locked_text_2->setText(QCoreApplication::translate("MainWindow", "LOCKED", nullptr));
        locked_text_3->setText(QCoreApplication::translate("MainWindow", "COMING SOON", nullptr));
        locked_text_4->setText(QCoreApplication::translate("MainWindow", "COMING SOON", nullptr));
        locked_text_5->setText(QCoreApplication::translate("MainWindow", "COMING SOON", nullptr));
        locked_text_6->setText(QCoreApplication::translate("MainWindow", "LOCKED", nullptr));
        locked_text_7->setText(QCoreApplication::translate("MainWindow", "LOCKED", nullptr));
        locked_text_8->setText(QCoreApplication::translate("MainWindow", "LOCKED", nullptr));
        trader->setText(QString());
        mining_rig->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
