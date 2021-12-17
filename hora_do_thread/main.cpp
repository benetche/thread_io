#include "mainwindow.h"
#include <QFontDatabase>
#include <QApplication>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon(":/assets/resources/images/Money Icon.png"));
    w.setWindowTitle("THREAD.IO");

    w.show();
    return a.exec();
}
