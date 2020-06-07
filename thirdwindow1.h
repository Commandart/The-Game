#ifndef THIRDWINDOW1_H
#define THIRDWINDOW1_H

#include <QDialog>
#include "window111.h"
#include "window112.h"
#include "window113.h"

#include "window121.h"
#include "window122.h"
#include "window123.h"

#include "window131.h"
#include "window132.h"
#include "window133.h"

//#include "secondwindow.h"
#include <QLineEdit>

namespace Ui {
class thirdwindow1;
}

class thirdwindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit thirdwindow1(QWidget *parent = 0);
    ~thirdwindow1();
    QLineEdit *str;

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

    void ChangeVar();

private:
    Ui::thirdwindow1 *ui;
    window111 *win_111;
    window112 *win_112;
    window113 *win_113;
    window121 *win_121;
    window122 *win_122;
    window123 *win_123;
    window131 *win_131;
    window132 *win_132;
    window133 *win_133;// указатель на второе окно

};


#endif // THIRDWINDOW1_H
