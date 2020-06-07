#ifndef THIRDWINDOW3_H
#define THIRDWINDOW3_H

#include <QDialog>
#include "window311.h"

namespace Ui {
class thirdwindow3;
}

class thirdwindow3 : public QDialog
{
    Q_OBJECT

public:
    explicit thirdwindow3(QWidget *parent = 0);
    ~thirdwindow3();

    QString* answerPushedButtons();
    void initButtons(QString String);

signals:
    void secondWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_1_clicked();

private:
    Ui::thirdwindow3 *ui;
    window311 *win_311;// указатель на второе окно
};


#endif // THIRDWINDOW3_H
