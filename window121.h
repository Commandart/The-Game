#ifndef WINDOW121_H
#define WINDOW121_H

#include <QDialog>


namespace Ui {
class window121;
}

class window121 : public QDialog
{
    Q_OBJECT

public:
    explicit window121(QWidget *parent = 0);
    ~window121();
    void scoreChange();
signals:
    void tur1_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window121 *ui;
};

#endif // WINDOW121_H
