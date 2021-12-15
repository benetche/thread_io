#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QLabel>
int counter = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    counter = 0;
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    counter++;
    ui->label_2->setText(QString::number(counter));
}

