#ifndef WINDOW223_H
#define WINDOW223_H

#include <QDialog>


namespace Ui {
class window223;
}

class window223 : public QDialog
{
    Q_OBJECT

public:
    explicit window223(QWidget *parent = 0);
    ~window223();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window223 *ui;
};

#endif // WINDOW223_H
