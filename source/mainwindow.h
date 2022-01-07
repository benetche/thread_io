#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "moneypurse.h"
#include "autoclicker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_click_button_clicked();

    void on_trader_buy_clicked();

    void on_pushButton_3_clicked();

    void on_gpu_buy_clicked();

    void on_rig_buy_clicked();

private:
    Ui::MainWindow *ui;
    MoneyPurse *purse;
    AutoClicker *trader;
    AutoClicker *gpu;
    AutoClicker *rig;
};
#endif // MAINWINDOW_H
