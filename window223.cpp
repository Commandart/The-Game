#include "window223.h"
#include "ui_window223.h"
#include <QLabel>
//#include <QGraphicsDropShadowEffect>
extern int score;

window223::window223(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window223)
{
    ui->setupUi(this);
    extern int score;
    ui->label_2->setStyleSheet("background-image: url(:/img/blue.jpg);");
    //ui->label->setStyleSheet("background-image: url(:/img/yellow.jpg);");
    ui->label->setStyleSheet("color: white; background-color: rgba(0,0,0,85);");
    ui->label_score->setText(QString::number(score));
    ui->label_4->setStyleSheet("color: white");
    //QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    //effect->setBlurRadius(0);
    //effect->setColor(QColor("black"));
    //effect->setOffset(2,2);
    //ui->label->setGraphicsEffect(effect);
    ui->close_hit->setStyleSheet("border-image: url(:/img/question.jpg) stretch;");
    ui->show_hit->setStyleSheet("border-image: url(:/img/question.jpg) stretch;");
    //w = new MainWindow();
    //connect(w, SIGNAL(RefreshData()), this, SLOT(scoreChange()));
}

window223::~window223()
{
    delete ui;
}

void window223::scoreChange()
{
    ui->label_score->setText(QString::number(score));
}

void window223::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit tur2_window(); // И вызываем сигнал на открытие главного окна
}

void window223::on_pushButton_answer_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    if(answer == "Яркости" ||
       answer == "Яркость" ||
       answer == "По яркости")
    {
        ui->label_result->setStyleSheet("color: green; background: white");
        ui->label_result->setText("Верно!");
        score += 1000;
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
                                  " Это яркoсть");
        score -= 1000;
        ui->label_score->setText(QString::number(score));
        ui->pushButton_answer->setEnabled(false);
        ui->pushButton_answer->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
}

void window223::on_show_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void window223::on_close_hit_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
