#ifndef WINDOW131_H
#define WINDOW131_H

#include <QDialog>


namespace Ui {
class window131;
}

class window131 : public QDialog
{
    Q_OBJECT

public:
    explicit window131(QWidget *parent = 0);
    ~window131();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window131 *ui;
};

#endif // WINDOW131_H
