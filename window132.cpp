#include "window132.h"
#include "ui_window132.h"
#include <QLabel>

extern int score;

window132::window132(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window132)
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
}

window132::~window132()
{
    delete ui;
}

void window132::scoreChange()
{
    extern int score;
    ui->label_score->setText(QString::number(score));
}

void window132::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur1_window(); // И вызываем сигнал на открытие главного окна
}

void window132::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "В Атлантическом океане" ||
       answer == "Атлантический океан"    ||
       answer == "Атлантика"              ||
       answer == "Атлантическом океане"   ||
       answer == "Атлантическом"          ||
       answer == "В Атлантическом"        ||
       answer == "Атлантический")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 300;
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
                                  " В Атлантическом океане");
        score -= 300;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window132::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window132::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
