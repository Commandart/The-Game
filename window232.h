#ifndef WINDOW232_H
#define WINDOW232_H

#include <QDialog>


namespace Ui {
class window232;
}

class window232 : public QDialog
{
    Q_OBJECT

public:
    explicit window232(QWidget *parent = 0);
    ~window232();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window232 *ui;
};

#endif // WINDOW232_H
