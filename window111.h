#ifndef WINDOW111_H
#define WINDOW111_H
//#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class window111;
}
//class MainWindow;

class window111 : public QDialog
{
    Q_OBJECT

public:
    explicit window111(QWidget *parent = 0);
    ~window111();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();

private:
    Ui::window111 *ui;
    //Ui::MainWindow *w;
};

#endif // WINDOW111_H
