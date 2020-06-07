#include "window131.h"
#include "ui_window131.h"
#include <QLabel>

extern int score;

window131::window131(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window131)
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
    ui->label_3->setText("Главные запасы пресной воды на Земле сосредоточены именно на этом континенте");
}

window131::~window131()
{
    delete ui;
}

void window131::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window131::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur1_window(); // И вызываем сигнал на открытие главного окна
}

void window131::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Антарктида" ||
       answer == "Антарктиды")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 200;
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
                                  " Антарктида");
        score -= 200;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window131::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window131::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
