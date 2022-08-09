#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ShutdownBT_clicked()
{
    system("systemctl poweroff");
}


void MainWindow::on_RebootBT_clicked()
{
    system("systemctl reboot");
}


void MainWindow::on_LockBT_clicked()
{
    system("~/.config/i3lock-config/./lock.sh");
    exit(EXIT_SUCCESS);
}


void MainWindow::on_SuspendBT_clicked()
{
    system("systemctl suspend");
    exit(EXIT_SUCCESS);
}


void MainWindow::on_LogoutBT_clicked()
{
    system("bspc quit");
}

