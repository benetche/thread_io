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
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
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
        MainWindow->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/Main Background.png)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 351, 201));
        label->setStyleSheet(QString::fromUtf8("border: 0;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/BG Preset.png")));
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 111, 71));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 20pt \"Minecraft\";\n"
"	border-image: url(:/assets/Button BG shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 18pt;\n"
"	border-image: url(:/assets/Button BG.png);\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 10, 511, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/assets/Upgrade.png")));
        label_3->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(434, 142, 100, 31));
        label_5->setMinimumSize(QSize(100, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 16pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(492, 142, 50, 30));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 14pt \"Minecraft\";\n"
"	border-image: url(:/assets/Button BG shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt;\n"
"	border-image: url(:/assets/Button BG.png);\n"
"}\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(602, 142, 100, 31));
        label_6->setMinimumSize(QSize(100, 20));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 16pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(656, 142, 50, 30));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 14pt \"Minecraft\";\n"
"	border-image: url(:/assets/Button BG shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt;\n"
"	border-image: url(:/assets/Button BG.png);\n"
"}\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(772, 142, 100, 31));
        label_7->setMinimumSize(QSize(100, 20));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #9a7a25;\n"
"font: 16pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(822, 142, 50, 30));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #9a7a25;\n"
"	font: 14pt \"Minecraft\";\n"
"	border-image: url(:/assets/Button BG shadow.png);\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt;\n"
"	border-image: url(:/assets/Button BG.png);\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(444, 200, 51, 41));
        label_4->setStyleSheet(QString::fromUtf8("border-image: none;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/assets/locked.png")));
        label_4->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(432, 254, 100, 31));
        label_8->setMinimumSize(QSize(100, 20));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #ffffff;\n"
"font: 12pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 270, 351, 51));
        label_9->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/assets/Button BG shadow.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 320, 351, 51));
        label_10->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/assets/Button BG shadow.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 370, 351, 51));
        label_11->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/assets/Button BG shadow.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 220, 351, 51));
        label_12->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"border: 0;"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/assets/Button BG shadow.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 230, 321, 31));
        label_13->setMinimumSize(QSize(100, 20));
        label_13->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 280, 321, 31));
        label_14->setMinimumSize(QSize(100, 20));
        label_14->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 330, 321, 31));
        label_15->setMinimumSize(QSize(100, 20));
        label_15->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(40, 380, 321, 31));
        label_16->setMinimumSize(QSize(100, 20));
        label_16->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
"font: 22pt \"Minecraft\";\n"
"border-image: none;\n"
"background-color: transparent;\n"
""));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "CLICK!", nullptr));
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        label_4->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "LOCKED", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "TRADERS: 0", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "GPUs: 0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "MINING RIGS: 0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "TOTAL: 0 per/s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
