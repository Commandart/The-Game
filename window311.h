#ifndef WINDOW311_H
#define WINDOW311_H

#include <QDialog>

namespace Ui {
class window311;
}
//class MainWindow;

class window311 : public QDialog
{
    Q_OBJECT

public:
    explicit window311(QWidget *parent = 0);
    ~window311();
    void scoreChange();
    static int bet;
signals:
    void tur3_window();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::window311 *ui;
};

#endif // WINDOW311_H
