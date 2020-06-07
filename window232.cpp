#include "window232.h"
#include "ui_window232.h"
#include <QLabel>

extern int score;

window232::window232(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window232)
{
    ui->setupUi(this);
    extern int score;
    ui->label_2->setStyleSheet("background-image: url(:/img/blue.jpg);");
    //ui->label->setStyleSheet("background-image: url(:/img/yellow.jpg);");
    ui->label->setStyleSheet("color: white; background-color: rgba(0,0,0,85);");
    ui->label_score->setText(QString::number(score));
    ui->label_4->setStyleSheet("color: white");
    ui->close_hit->setStyleSheet("border-image: url(:/img/question.jpg) stretch;");
    ui->show_hit->setStyleSheet("border-image: url(:/img/question.jpg) stretch;");

    ui->label_3->setStyleSheet("color: white; background-color: rgba(0,0,0,85);");
    ui->label_3->setWordWrap(true);
    ui->label_3->setText("Это растение часто путают с березой, считая, что именно она является самой распространенной. Также древесина этого дерева широко использовалась в кораблестроение. Этот вид составляет около 40% от всех лесных деревьев");
}

window232::~window232()
{
    delete ui;
}

void window232::scoreChange()
{
    extern int score;
    ui->label_score->setText(QString::number(score));
}

void window232::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur2_window(); // И вызываем сигнал на открытие главного окна
}

void window232::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Лиственница")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 800;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
    else
    {
        ui->label_result->setStyleSheet("color: red; background: white");
        ui->label_result->setWordWrap(true);
        ui->label_result->setText("Неверно!"
                                  " Это лиственница");
        score -= 800;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window232::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window232::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
