#ifndef WINDOW213_H
#define WINDOW213_H

#include <QDialog>


namespace Ui {
class window213;
}

class window213 : public QDialog
{
    Q_OBJECT

public:
    explicit window213(QWidget *parent = 0);
    ~window213();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_answer_2_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window213 *ui;
};

#endif // WINDOW213_H
