#include "secondwindow.h"
#include "thirdwindow1.h"
#include "thirdwindow2.h"
#include "thirdwindow3.h"
#include "ui_secondwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QString>

extern int score;

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    ui->label->setStyleSheet("background-image: url(:/img/blue.jpg);");
    ui->pushButton_4->setVisible(false);
    tur_1 = new thirdwindow1();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(tur_1, &thirdwindow1::secondWindow, this, &SecondWindow::show);
    connect(tur_1, &thirdwindow1::secondWindow, this, &SecondWindow::scoreChange);
    tur_2 = new thirdwindow2();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(tur_2, &thirdwindow2::secondWindow, this, &SecondWindow::show);
    connect(tur_2, &thirdwindow2::secondWindow, this, &SecondWindow::scoreChange);
    tur_3 = new thirdwindow3();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(tur_3, &thirdwindow3::secondWindow, this, &SecondWindow::show);
    connect(tur_3, &thirdwindow3::secondWindow, this, &SecondWindow::scoreChange);
    ui->label_score->setText(QString::number(score));

}

void SecondWindow::scoreChange()
{
    extern int score;
    ui->label_score->setText(QString::number(score));
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_4_clicked()
{
    QFile file("./setting.txt");
    file.open(QIODevice::WriteOnly);

    QString ResultString;

    ResultString.append(QString::number(score).toUtf8() + "\n");

    ResultString.append(this->tur_1->answerPushedButtons());
    ResultString.append("\n");

    ResultString.append(this->tur_2->answerPushedButtons());
    ResultString.append("\n");

    file.write(ResultString.toUtf8());
    file.close();

    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void SecondWindow::on_pushButton_5_clicked()
{
    QFile file("./setting.txt");
    file.open(QIODevice::WriteOnly);

    QString ResultString;

    ResultString.append(QString::number(score).toUtf8() + "\n");

    ResultString.append(this->tur_1->answerPushedButtons());
    ResultString.append("\n");

    ResultString.append(this->tur_2->answerPushedButtons());
    ResultString.append("\n");

    file.write(ResultString.toUtf8());
    file.close();

    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна

}

void SecondWindow::on_pushButton_3_clicked()
{
    this->close();    // Закрываем основное окно
    tur_1->showFullScreen();  // Показываем второе окно
}

void SecondWindow::on_pushButton_2_clicked()
{
    this->close();    // Закрываем основное окно
    tur_2->showFullScreen();  // Показываем второе окно
}

void SecondWindow::on_pushButton_clicked()
{
    this->close();    // Закрываем основное окно
    tur_3->showFullScreen();  // Показываем второе окно
}
