#ifndef WINDOW221_H
#define WINDOW221_H

#include <QDialog>


namespace Ui {
class window221;
}

class window221 : public QDialog
{
    Q_OBJECT

public:
    explicit window221(QWidget *parent = 0);
    ~window221();
    void scoreChange();
signals:
    void tur2_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_answer_clicked();

    void on_show_hit_clicked();

    void on_close_hit_clicked();
private:
    Ui::window221 *ui;
};

#endif // WINDOW221_H
