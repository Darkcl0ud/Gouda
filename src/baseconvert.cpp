#include "baseconvert.h"
#include "ui_baseconvert.h"

BaseConvert::BaseConvert(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseConvert)
{
    ui->setupUi(this);
}

BaseConvert::~BaseConvert()
{
    delete ui;
}
