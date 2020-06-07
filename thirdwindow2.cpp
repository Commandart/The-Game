#include "thirdwindow2.h"
#include "ui_thirdwindow2.h"
#include <QMessageBox>
#include "window211.h"
#include "window212.h"
#include "window213.h"
#include "window221.h"
#include "window222.h"
#include "window223.h"
#include "window231.h"
#include "window232.h"
#include "window233.h"
#include "QWidget"

static QString* Result = new(QString);

thirdwindow2::thirdwindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdwindow2)
{
    ui->setupUi(this);
    ui->label_4->setStyleSheet("background-image: url(:/img/blue.jpg);");
    ui->pushButton_10->setVisible(false);
    // Инициализируем второе окно
    win_211 = new window211();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_211, &window211::tur2_window, this, &thirdwindow2::show);
    win_212 = new window212();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_212, &window212::tur2_window, this, &thirdwindow2::show);
    win_213 = new window213();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_213, &window213::tur2_window, this, &thirdwindow2::show);
    win_221 = new window221();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_221, &window221::tur2_window, this, &thirdwindow2::show);
    win_222 = new window222();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_222, &window222::tur2_window, this, &thirdwindow2::show);
    win_223 = new window223();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_223, &window223::tur2_window, this, &thirdwindow2::show);
    win_231 = new window231();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_231, &window231::tur2_window, this, &thirdwindow2::show);
    win_232 = new window232();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_232, &window232::tur2_window, this, &thirdwindow2::show);
    win_233 = new window233();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_233, &window233::tur2_window, this, &thirdwindow2::show);
}

thirdwindow2::~thirdwindow2()
{
    delete Result;
    delete ui;
}

void thirdwindow2::on_pushButton_10_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit secondWindow(); // И вызываем сигнал на открытие главного окна
}

void thirdwindow2::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit secondWindow(); // И вызываем сигнал на открытие главного окна
}

void thirdwindow2::on_pushButton_clicked()
{
    win_211->scoreChange();
    win_211->showFullScreen();  // Показываем второе окно
    ui->pushButton->setEnabled(false);
    ui->pushButton->setStyleSheet("color: navy;"
                                  "background-color: navy;");
    this->close();    // Закрываем основное окно
}

void thirdwindow2::on_pushButton_2_clicked()
{
    win_212->scoreChange();
    win_212->showFullScreen();  // Показываем второе окно
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_2->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_3_clicked()
{
    win_213->scoreChange();
    win_213->showFullScreen();  // Показываем второе окно
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_3->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_4_clicked()
{
    win_221->scoreChange();
    win_221->showFullScreen();  // Показываем второе окно
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_4->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_5_clicked()
{
    win_222->scoreChange();
    win_222->showFullScreen();  // Показываем второе окно
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_5->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_6_clicked()
{
    win_223->scoreChange();
    win_223->showFullScreen();  // Показываем второе окно
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_6->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_7_clicked()
{
    win_231->scoreChange();
    win_231->showFullScreen();  // Показываем второе окно
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_7->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_8_clicked()
{
    win_232->scoreChange();
    win_232->showFullScreen();  // Показываем второе окно
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_8->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

void thirdwindow2::on_pushButton_9_clicked()
{
    win_233->scoreChange();
    win_233->showFullScreen();  // Показываем второе окно
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_9->setStyleSheet("color: navy;"
                                    "background-color: navy;");
    this->close();
}

QString* thirdwindow2::answerPushedButtons()
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

void thirdwindow2::initButtons(QString String)
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
