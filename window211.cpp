#include "window211.h"
#include "ui_window211.h"
#include <QLabel>

extern int score;

window211::window211(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window211)
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
    ui->label_3->setText("Родина этого продукта — Южная Америка, но он сумел завоевать популярность во Франции, Германии и других странах Европы и даже стал неотъемлемой частью многих национальных блюд, в том числе и в России, где ещё при Петре I был привезён");
}

window211::~window211()
{
    delete ui;
}

void window211::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window211::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur2_window(); // И вызываем сигнал на открытие главного окна
}

void window211::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Картофель" ||
       answer == "Картошка")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 400;
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
                                  " Это картофель");
        score -= 400;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window211::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window211::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
