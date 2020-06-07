#ifndef WINDOW211_H
#define WINDOW211_H

#include <QDialog>

namespace Ui {
class window211;
}

class window211 : public QDialog
{
    Q_OBJECT

public:
    explicit window211(QWidget *parent = 0);
    ~window211();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();

private:
    Ui::window211 *ui;
};

#endif // WINDOW211_H
