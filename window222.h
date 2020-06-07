#ifndef WINDOW222_H
#define WINDOW222_H

#include <QDialog>


namespace Ui {
class window222;
}

class window222 : public QDialog
{
    Q_OBJECT

public:
    explicit window222(QWidget *parent = 0);
    ~window222();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window222 *ui;
};

#endif // WINDOW222_H
