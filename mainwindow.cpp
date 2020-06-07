#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <vector>
#include <QDebug>

extern int score;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background-image: url(:/img/yellow.jpg);");
    /*QPixmap pix1(":/img/img/kraska_art_polosy_pyatna_117030_1920x1200.jpg");
    int w = ui -> label -> width();
    int h = ui -> label -> height();

    ui->label->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));*/
    // Инициализируем второе окно
    window_2 = new SecondWindow();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(window_2, &SecondWindow::firstWindow, this, &MainWindow::show);
    ui->label_2->setStyleSheet("color: white");


    //ui->label_2->setToolTip("ghdgjdhj\nfkrfkr\n");
    //ui->label_2->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Подтверждение выхода из программы","Вы сдались и уверены, что не сможете отыграться?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {

        QFile file("./setting.txt");
        file.open(QIODevice::WriteOnly);

        QString ResultString;

        ResultString.append(QString::number(score).toUtf8() + "\n");

        ResultString.append(this->window_2->tur_1->answerPushedButtons());
        ResultString.append("\n");

        ResultString.append(this->window_2->tur_2->answerPushedButtons());
        ResultString.append("\n");

        file.write(ResultString.toUtf8());
        file.close();

        QApplication::quit();
    }
    else
    {
        hide();
        QMainWindow::showFullScreen();
    }
}


void MainWindow::on_pushButton_clicked()
{
//    extern bool w111, w112, w113, w121, w122, w123, w131, w132, w133, w211, w212, w213, w221, w222, w223, w231, w232, w233;

    QMessageBox::StandardButton reply = QMessageBox::question(this,"Начало игры...","Хотите продолжить ранее начатую игру?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QFile file("./setting.txt");
        file.open(QIODevice::ReadOnly);
        QString String = file.readLine();
        score = String.toInt();

        this->window_2->scoreChange();

        String = file.readLine();

        this->window_2->tur_1->initButtons(String);

        String = file.readLine();

        this->window_2->tur_2->initButtons(String);

        file.close();
        window_2->showFullScreen();  // Показываем второе окно
        this->close();    // Закрываем основное окно*/
    }
    else
    {
        QFile file(":img/setting_default.txt");
        file.open(QIODevice::ReadOnly);
        QString String = file.readLine();
        score = String.toInt();

        String = file.readLine();

        this->window_2->tur_1->initButtons(String);

        String = file.readLine();

        this->window_2->tur_2->initButtons(String);

        file.close();
        window_2->showFullScreen();  // Показываем второе окно
        this->close();    // Закрываем основное окно*/
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Правила Игры");
    msgBox.setText("\t1. Старайтесь отвечать на вопросы правильно, учитывая арфаграфию.\n"
                   "\t2. При написании ответа на вопрос первая буква должна быть обязательно заглавной,  а"
                   "последующие согласно правилам грамматики, которые желательно знать хотя бы немного.\n"
                   "\t3. Можно пропускать вопрос, счёт останется неизменным, однако вы не сможете вернуться"
                   "ся к вопросу, так как кнопка заблокируется.\n"
                   "\t4. Желательно проходить туры по порядку. Так для финального тура необходимо  положительное"
                   "количество очков для ставки.\n"
                   "\t5. Также если вы решите выйти из игры, то ваш прогресс будет сохранён в надёжно"
                   "защищённом хранилище игры, который по слухам даже лучше, чем в Пентагоне.");
    msgBox.exec();
}
