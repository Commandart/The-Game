#ifndef WINDOW212_H
#define WINDOW212_H

#include <QDialog>

namespace Ui {
class window212;
}

class window212 : public QDialog
{
    Q_OBJECT

public:
    explicit window212(QWidget *parent = 0);
    ~window212();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window212 *ui;
};

#endif // WINDOW212_H
