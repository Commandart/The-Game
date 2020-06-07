#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include "thirdwindow1.h"
#include "thirdwindow2.h"
#include "thirdwindow3.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

    void scoreChange();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_clicked();

public:
    Ui::SecondWindow *ui;
    thirdwindow1 *tur_1; // указатель на второе окно
    thirdwindow2 *tur_2; // указатель на второе окно
    thirdwindow3 *tur_3; // указатель на второе окно
};

#endif // SECONDWINDOW_H
