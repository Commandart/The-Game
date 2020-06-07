#include "thirdwindow1.h"
#include "ui_thirdwindow1.h"
#include <QMessageBox>
#include "window111.h"
#include "window112.h"
#include "window113.h"
#include "window121.h"
#include "window122.h"
#include "window123.h"
#include "window131.h"
#include "window132.h"
#include "window133.h"
#include "QWidget"
#include <QDebug>
//#include <QTimer>

static QString* Result = new(QString);

thirdwindow1::thirdwindow1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdwindow1)
{
    ui->setupUi(this);
    ui->pushButton_10->setVisible(false);

    // Инициализируем второе окно
    ui->label_4->setStyleSheet("background-image: url(:/img/blue.jpg);");
    win_111 = new window111();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_111, &window111::tur1_window, this, &thirdwindow1::show);
    win_112 = new window112();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_112, &window112::tur1_window, this, &thirdwindow1::show);
    win_113 = new window113();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_113, &window113::tur1_window, this, &thirdwindow1::show);
    win_121 = new window121();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_121, &window121::tur1_window, this, &thirdwindow1::show);
    win_122 = new window122();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_122, &window122::tur1_window, this, &thirdwindow1::show);
    win_123 = new window123();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_123, &window123::tur1_window, this, &thirdwindow1::show);
    win_131 = new window131();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_131, &window131::tur1_window, this, &thirdwindow1::show);
    win_132 = new window132();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_132, &window132::tur1_window, this, &thirdwindow1::show);
    win_133 = new window133();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_133, &window133::tur1_window, this, &thirdwindow1::show);

}

void thirdwindow1::ChangeVar()
{

    //    extern bool w111;
    //    qDebug() << w111;
    //    if(w111 == true)
    //    {
    //        qDebug() << "/n IN /n";
    //        ui->pushButton->setEnabled(false);
    //        ui->pushButton->setStyleSheet("color: navy;"
    //                                      "background-color: navy;");
    //    }

}

thirdwindow1::~thirdwindow1()
{
    delete Result;
    delete ui;
}

void thirdwindow1::on_pushButton_10_clicked()
{
    this->close();      // Закрываем окно
    emit secondWindow();
}

void thirdwindow1::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit secondWindow(); // И вызываем сигнал на открытие главного окна
}

void thirdwindow1::on_pushButton_clicked()
{

    win_111->scoreChange();
    win_111->showFullScreen();  // Показываем второе окно
    ui->pushButton->setEnabled(false);
    ui->pushButton->setStyleSheet("color: navy;"
                                  "background-color: navy;");
    this->close();    // Закрываем основное окно
}

void thirdwindow1::on_pushButton_2_clicked()
{
    win_112->scoreChange();
    win_112->showFullScreen();  // Показываем второе окно
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_2->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_3_clicked()
{
    win_113->scoreChange();
    win_113->showFullScreen();  // Показываем второе окно
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_3->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_4_clicked()
{
    win_121->scoreChange();
    win_121->showFullScreen();  // Показываем второе окно
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_4->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_5_clicked()
{
    win_122->scoreChange();
    win_122->showFullScreen();  // Показываем второе окно
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_5->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_6_clicked()
{
    win_123->scoreChange();
    win_123->showFullScreen();  // Показываем второе окно
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_6->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_7_clicked()
{
    win_131->scoreChange();
    win_131->showFullScreen();  // Показываем второе окно
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_7->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_8_clicked()
{
    win_132->scoreChange();
    win_132->showFullScreen();  // Показываем второе окно
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_8->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow1::on_pushButton_9_clicked()
{
    //win_133->startTimer_on_question();
    win_133->scoreChange();
    win_133->showFullScreen();  // Показываем второе окно
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_9->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

QString* thirdwindow1::answerPushedButtons()
{
    Result->clear();
    (ui->pushButton->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_2->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_3->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_4->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_5->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_6->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_7->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_8->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_9->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_10->isEnabled())? (Result->append("0")):(Result->append("1"));
    (ui->pushButton_11->isEnabled())? (Result->append("0")):(Result->append("1"));
    return Result;
}

void thirdwindow1::initButtons(QString String)
{

    if (String.at(0) == '1') {
        ui->pushButton->setEnabled(false);
        ui->pushButton->setStyleSheet("color: navy;"
                                      "background-color: navy;");
    }
    if (String.at(1) == '1') {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(2) == '1') {
        ui->pushButton_3->setEnabled(false);
        ui->pushButton_3->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(3) == '1') {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(4) == '1') {
        ui->pushButton_5->setEnabled(false);
        ui->pushButton_5->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(5) == '1') {
        ui->pushButton_6->setEnabled(false);
        ui->pushButton_6->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(6) == '1') {
        ui->pushButton_7->setEnabled(false);
        ui->pushButton_7->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(7) == '1') {
        ui->pushButton_8->setEnabled(false);
        ui->pushButton_8->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(8) == '1') {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_9->setStyleSheet("color: navy;"
                                        "background-color: navy;");
    }
    if (String.at(9) == '1') {
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_10->setStyleSheet("color: navy;"
                                         "background-color: navy;");
    }
    if (String.at(10) == '1') {
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_11->setStyleSheet("color: navy;"
                                         "background-color: navy;");
    }
}
