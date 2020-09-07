#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(300,200);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_HelloWorldButton_clicked()
{
    msgBox.setText(HelloWorldString);
    msgBox.setWindowTitle("Notify");
    msgBox.exec();
}

void MainWindow::on_Calculator_clicked()
{
    calc = new Calc();
    calc->show();
}


void MainWindow::on_Close_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_AutoDeployProject_clicked()
{
    deployqt = new DeployQt();
    deployqt->show();
}

void MainWindow::on_BaseConverter_clicked()
{
    baseconvert = new BaseConvert();
    baseconvert->show();
}