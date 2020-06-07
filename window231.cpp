#include "window231.h"
#include "ui_window231.h"
#include <QLabel>

extern int score;

window231::window231(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window231)
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
    ui->label_3->setStyleSheet("background-image: url(:/img/tiger.jpg);");
}

window231::~window231()
{
    delete ui;
}

void window231::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window231::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur2_window(); // И вызываем сигнал на открытие главного окна
}

void window231::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "По окрасу или по размеру" ||
       answer == "Окрас"                    ||
       answer == "Размер"                   ||
       answer == "По размеру"               ||
       answer == "По окрасу"                ||
       answer == "Окрас и размер"           ||
       answer == "Цвет"     )
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
                                  " В этом вопросе допускается два правильных ответа:\n=> по окрасу\n=> по размеру");
        score -= 400;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window231::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window231::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
