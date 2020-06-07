#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h" // подключаем второе окно

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void RefreshData();
private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    SecondWindow *window_2; // указатель на второе окно
    //MainWindow *window_1;
};

#endif // MAINWINDOW_H
