#include "window112.h"
#include "ui_window112.h"
#include <QLabel>

extern int score;

window112::window112(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window112)
{
    extern int score;
    ui->setupUi(this);
    ui->label_score->setText(QString::number(score));
    ui->label_2->setStyleSheet("background-image: url(:/img/blue.jpg);");
    //ui->label->setStyleSheet("background-image: url(:/img/yellow.jpg);");
    ui->label->setStyleSheet("color: white; background-color: rgba(0,0,0,85);");
    ui->label_4->setStyleSheet("color: white");
    ui->close_hit->setStyleSheet("border-image: url(:/img/question.jpg) stretch;");
    ui->show_hit->setStyleSheet("border-image: url(:/img/question.jpg) stretch;");

    ui->label_3->setStyleSheet("color: white; background-color: rgba(0,0,0,85);");
    ui->label_3->setWordWrap(true);
    ui->label_3->setText("Эти войны были самыми кровопролитными и масштабными за всю историю человечества");


}

window112::~window112()
{
    delete ui;
}

void window112::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window112::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur1_window(); // И вызываем сигнал на открытие главного окна
}

void window112::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Мировыми войнами"              ||
       answer == "Мировые войны"                 ||
       answer == "Первая и вторая мировая война" ||
       answer == "Мировыми"                      ||
       answer == "Мировые")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setWordWrap(true);
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
                                  " Это мировые войны");
        score -= 300;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window112::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window112::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}

