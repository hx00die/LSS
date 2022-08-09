#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

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
    void on_ShutdownBT_clicked();

    void on_RebootBT_clicked();

    void on_LockBT_clicked();

    void on_SuspendBT_clicked();

    void on_LogoutBT_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
