#ifndef WINDOW231_H
#define WINDOW231_H

#include <QDialog>


namespace Ui {
class window231;
}

class window231 : public QDialog
{
    Q_OBJECT

public:
    explicit window231(QWidget *parent = 0);
    ~window231();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window231 *ui;
};

#endif // WINDOW231_H
