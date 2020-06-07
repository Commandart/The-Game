#include "window311.h"
#include "ui_window311.h"
#include <QLabel>


extern int score;

int window311::bet;

window311::window311(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window311)
{
    ui->setupUi(this);
    extern int score;
    ui->label_2->setStyleSheet("background-image: url(:/img/blue.jpg);");
    //ui->label->setStyleSheet("background-image: url(:/img/yellow.jpg);");
    //ui->label->setStyleSheet("color: white");
    ui->label_score->setText(QString::number(score));
    ui->label->setVisible(false);
    ui->label->setStyleSheet("color: white; background-color: rgba(0,0,0,85);");
    ui->pushButton_2->setVisible(false);
    ui->lineEdit_2->setVisible(false);
}

window311::~window311()
{
    delete ui;
}

void window311::scoreChange()
{    
    ui->label_score->setText(QString::number(score));
}

void window311::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur3_window(); // И вызываем сигнал на открытие главного окна
}

void window311::on_pushButton_clicked()
{
    QString answer = ui->lineEdit->text();
    if(answer.toInt() > 0 &&
       answer.toInt() <= score)
    {
        ui->label_3->setStyleSheet("color: green; background: white");
        ui->label_3->setWordWrap(true);
        ui->label_3->setText("Ставка принята, внимание, вопрос ->");
        bet = answer.toInt();
        ui->label_score_2->setText(QString::number(bet));
        ui->label->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->lineEdit_2->setVisible(true);
    }

    else
    {
        if(answer.toInt() <= 0)
        {
            ui->label_3->setStyleSheet("color: red; background: white");
            ui->label_3->setWordWrap(true);
            ui->label_3->setText("Ставка должна быть положительным числом!");
        }
        if(answer.toInt() > score)
        {
            ui->label_3->setStyleSheet("color: red; background: white");
            ui->label_3->setWordWrap(true);
            ui->label_3->setText("У вас недостаточно очков для такой ставки!");
        }
    }
}

void window311::on_pushButton_2_clicked()
{
    QString answer = ui->lineEdit_2->text();
    if(answer == "Кузнечик" ||
       answer == "Кузнечиков")
    {
        ui->label_4->setStyleSheet("color: green; background: white");
        score += bet;
        ui->label_4->setText(QString("Верно!\nПоздравляем с победой в Игре!\nВаш выигрыш составил:\n%1!!!").arg(score));
        ui->label_score->setText(QString::number(score));
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    else
    {
        ui->label_4->setStyleSheet("color: red; background: white");
        score -= bet;
        ui->label_4->setText(QString("Неверно!\nПравильный ответ: Кузнечиков\nОднако поздравляем с победой в Игре!\nВаш выигрыш составил:\n%1!").arg(score));
        ui->label_score->setText(QString::number(score));
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
}
