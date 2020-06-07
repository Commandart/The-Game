#include "thirdwindow3.h"
#include "ui_thirdwindow3.h"
#include <QMessageBox>
#include "window311.h"

#include "QWidget"

static QString* Result = new(QString);

thirdwindow3::thirdwindow3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdwindow3)
{
    ui->setupUi(this);
    ui->label_4->setStyleSheet("background-image: url(:/img/blue.jpg);");
    ui->pushButton_10->setVisible(false);
    // Инициализируем второе окно
    win_311 = new window311();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(win_311, &window311::tur3_window, this, &thirdwindow3::show);
}

thirdwindow3::~thirdwindow3()
{
    delete Result;
    delete ui;
}

void thirdwindow3::on_pushButton_10_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit secondWindow(); // И вызываем сигнал на открытие главного окна
}

void thirdwindow3::on_pushButton_11_clicked()
{
    //возврат в предыдущее окно
    this->close();      // Закрываем окно
    emit secondWindow(); // И вызываем сигнал на открытие главного окна
}



/*QString* thirdwindow2::answerPushedButtons()
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
}*/

void thirdwindow3::on_pushButton_1_clicked()
{
    win_311->scoreChange();
    win_311->showFullScreen();  // Показываем второе окно
    //ui->pushButton->setEnabled(false);
    //ui->pushButton->setStyleSheet("color: navy;"
                                  //"background-color: navy;");
    this->close();    // Закрываем основное окно
}
