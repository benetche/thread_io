#include "mainwindow.h"
#include <QFontDatabase>
#include <QApplication>
#include <QIcon>
#include <QFontDatabase>
#include <QFont>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    QFontDatabase newFont;
    //setando a fonte customizada
    newFont.addApplicationFont(":/assets/resources/fonts/MinecraftRegular-Bmg3.otf");
    //setando icone customizado
    w.setWindowIcon(QIcon(":/assets/resources/images/Money Icon.png"));
    //setando titulo customizado
    w.setWindowTitle("THREAD.IO");

    w.show();
    return a.exec();
}
