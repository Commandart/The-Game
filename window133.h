#ifndef WINDOW133_H
#define WINDOW133_H

#include <QDialog>


namespace Ui {
class window133;
}

class window133 : public QDialog
{
    Q_OBJECT

public:
    explicit window133(QWidget *parent = 0);
    ~window133();

    void scoreChange();

    //void startTimer_on_question();

signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window133 *ui;
    //QTimer *timer;
};

#endif // WINDOW133_H
