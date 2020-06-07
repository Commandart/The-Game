#ifndef WINDOW122_H
#define WINDOW122_H

#include <QDialog>


namespace Ui {
class window122;
}

class window122 : public QDialog
{
    Q_OBJECT

public:
    explicit window122(QWidget *parent = 0);
    ~window122();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window122 *ui;
};

#endif // WINDOW122_H
