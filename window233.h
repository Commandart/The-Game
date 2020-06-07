#ifndef WINDOW233_H
#define WINDOW233_H

#include <QDialog>


namespace Ui {
class window233;
}

class window233 : public QDialog
{
    Q_OBJECT

public:
    explicit window233(QWidget *parent = 0);
    ~window233();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window233 *ui;
};

#endif // WINDOW233_H
