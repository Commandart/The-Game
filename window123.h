#ifndef WINDOW123_H
#define WINDOW123_H

#include <QDialog>


namespace Ui {
class window123;
}

class window123 : public QDialog
{
    Q_OBJECT

public:
    explicit window123(QWidget *parent = 0);
    ~window123();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window123 *ui;
};

#endif // WINDOW123_H
