#include "window133.h"
#include "ui_window133.h"
#include <QLabel>
//#include <QTimer>
//#include <QTime>

extern int score;

window133::window133(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window133)
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
    //timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(on_pushButton_answer_clicked()));

}
/*void window133::startTimer_on_question()
{
    timer->start(40000);
    ui->label_3->setText("%s", %(timer));
}*/

window133::~window133()
{
    delete ui;
}

void window133::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window133::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur1_window(); // И вызываем сигнал на открытие главного окна
}

void window133::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Зеленоватые"        ||
       answer == "Зелёные"            ||
       answer == "Зелённые оттенки"   ||
       answer == "Зеленоватые оттенки")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 500;
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
                                  " Зеленоватые оттенки");
        score -= 500;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window133::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window133::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
