#include "window113.h"
#include "ui_window113.h"
#include <QLabel>

extern int score;

window113::window113(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window113)
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
    ui->label_3->setStyleSheet("background-image: url(:/img/war.jpg) stretch;");
}

window113::~window113()
{
    delete ui;
}
void window113::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window113::on_pushButton_12_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur1_window(); // И вызываем сигнал на открытие главного окна
}

void window113::on_pushButton_answer_2_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Николай 1"                 ||
       answer == "Николай Первый"            ||
       answer == "Николай I"                 ||
       answer == "Николай I Павлович"        ||
       answer == "Николай Первый Павлович")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 500;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer_2->setEnabled(false);
        ui->pushButton_answer_2->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
    else
    {
        ui->label_result->setStyleSheet("color: red; background: white");
        ui->label_result->setWordWrap(true);
        ui->label_result->setText("Неверно!"
                                  " Николай I");
        score -= 500;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer_2->setEnabled(false);
        ui->pushButton_answer_2->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window113::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window113::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
