#ifndef WINDOW113_H
#define WINDOW113_H

#include <QDialog>


namespace Ui {
class window113;
}

class window113 : public QDialog
{
    Q_OBJECT

public:
    explicit window113(QWidget *parent = 0);
    ~window113();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_answer_2_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window113 *ui;
};

#endif // WINDOW113_H
