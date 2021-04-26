#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Vabhoosha 4173","Confirm Submission ?",QMessageBox::Yes|QMessageBox::No);
        if(reply==QMessageBox::Yes)
        {
            QMessageBox::information(this,"Vabhoosha 4173","Submission is successful!!");
            qDebug()<<"Form is submitted";
        }
        if(reply==QMessageBox::No)
        {
            qDebug()<<"Nothing is submitted..";
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Vabhoosha 4173","Submit Again?",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Vabhoosha 4173","Resubmit is successful!!");
        qDebug()<<"Form is submitted again";
    }
    if(reply==QMessageBox::No)
    {
qDebug()<<"Nothing is submitted..";
    }
}

