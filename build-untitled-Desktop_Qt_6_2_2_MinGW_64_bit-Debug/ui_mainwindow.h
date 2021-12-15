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
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
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
        label->setGeometry(QRect(20, 10, 351, 211));
        label->setStyleSheet(QString::fromUtf8("border: 0;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/BG Preset.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 82, 100, 31));
        label_2->setMinimumSize(QSize(100, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: #9a7a25;\n"
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 85, 81, 51));
        label_4->setStyleSheet(QString::fromUtf8("border: 0;\n"
"border-image: none;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/assets/gpu.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 142, 100, 31));
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
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover{\n"
"	font: 12pt;\n"
"	border-image: url(:/assets/Button BG.png);\n"
"}\n"
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
        label_2->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CLICK!", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "0 ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
