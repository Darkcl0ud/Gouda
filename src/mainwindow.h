#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "calc.h"
#include "deployqt.h"
#include "baseconvert.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
    QMessageBox msgBox;
    QString HelloWorldString = "Hello, World!";
    Calc* calc;
    DeployQt* deployqt;
    BaseConvert* baseconvert;

private slots:
    void on_HelloWorldButton_clicked();

    void on_Calculator_clicked();

    void on_Close_clicked();

    void on_AutoDeployProject_clicked();

    void on_BaseConverter_clicked();
};
#endif // MAINWINDOW_H
