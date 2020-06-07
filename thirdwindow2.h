#ifndef THIRDWINDOW2_H
#define THIRDWINDOW2_H

#include <QDialog>
#include "window211.h"
#include "window212.h"
#include "window213.h"

#include "window221.h"
#include "window222.h"
#include "window223.h"

#include "window231.h"
#include "window232.h"
#include "window233.h"

namespace Ui {
class thirdwindow2;
}

class thirdwindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit thirdwindow2(QWidget *parent = 0);
    ~thirdwindow2();

    QString* answerPushedButtons();
    void initButtons(QString String);

signals:
    void secondWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::thirdwindow2 *ui;
    window211 *win_211;
    window212 *win_212;
    window213 *win_213;
    window221 *win_221;
    window222 *win_222;
    window223 *win_223;
    window231 *win_231;
    window232 *win_232;
    window233 *win_233;// указатель на второе окно
};


#endif // THIRDWINDOW2_H
