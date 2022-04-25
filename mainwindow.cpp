#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include"gua1.h"
#include"gua2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        gua1 * g1=new gua1();
        g1->setGeometry(this->geometry());
        g1->show();
        this->close();
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        gua2 * g2=new gua2();
        g2->setGeometry(this->geometry());
        g2->show();
        this->close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

