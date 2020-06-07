#ifndef WINDOW112_H
#define WINDOW112_H

#include <QDialog>

namespace Ui {
class window112;
}

class window112 : public QDialog
{
    Q_OBJECT

public:
    explicit window112(QWidget *parent = 0);
    ~window112();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window112 *ui;
};

#endif // WINDOW112_H
