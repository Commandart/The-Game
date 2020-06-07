#ifndef WINDOW132_H
#define WINDOW132_H

#include <QDialog>


namespace Ui {
class window132;
}

class window132 : public QDialog
{
    Q_OBJECT

public:
    explicit window132(QWidget *parent = 0);
    ~window132();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window132 *ui;
};

#endif // WINDOW132_H
