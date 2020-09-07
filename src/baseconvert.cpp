#include "baseconvert.h"
#include "ui_baseconvert.h"

BaseConvert::BaseConvert(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseConvert)
{
    ui->setupUi(this);

    connect(ui->lineHex, &QLineEdit::returnPressed, this, &BaseConvert::HexInput);
    connect(ui->lineBin, &QLineEdit::returnPressed, this, &BaseConvert::BinInput);
    connect(ui->lineDec, &QLineEdit::returnPressed, this, &BaseConvert::DecInput);
}

BaseConvert::~BaseConvert()
{
    delete ui;
}

void BaseConvert::HexInput()
{
    std::stringstream stream;
    unsigned long long out;
    bool IsValid = false;

    QString input = ui->lineHex->text();
    std::string InputStr = input.toStdString();

    for (size_t i = 0; i < InputStr.length(); i++)
    {

        if (InputStr[i] == '0' || InputStr[i] == '1' || InputStr[i] == '2' ||
            InputStr[i] == '3' || InputStr[i] == '4' || InputStr[i] == '5' ||
            InputStr[i] == '6' || InputStr[i] == '7' || InputStr[i] == '8' ||
            InputStr[i] == '9' || InputStr[i] == 'a' || InputStr[i] == 'b' ||
            InputStr[i] == 'c' || InputStr[i] == 'd' || InputStr[i] == 'e' ||
            InputStr[i] == 'f')
        {
            IsValid = true;
        }
        else
        {
            IsValid = false;
            break;
        }
    }

    if (IsValid)
    {
        stream << std::hex << InputStr;
        stream >> out;
        QString DecOut = QString::number(out);
        ui->lineDec->setText(DecOut);

        std::string str = std::bitset<64>(out).to_string();
        QString BinOut = QString::fromStdString(str);
        ui->lineBin->setText(BinOut);
    }
    else
    {
        msgBox.setText("\nInvalid Hex Input\n");
        msgBox.setWindowTitle("Notify");
        msgBox.exec();
    }
}

void BaseConvert::BinInput()
{
    std::stringstream HexOutStream;
    std::string HexOutStr;
    std::stringstream DecOutStream;
    std::string DecOutStr;
    bool IsValid = false;

    QString InputQS = ui->lineBin->text();   /* Gets value in lineBin */
    std::string InputStr = InputQS.toStdString(); /* Turns QString Input into StdString Input */


    for (size_t i = 0; i < InputStr.length(); i++)
    {
        if (InputStr[i] == '0' || InputStr[i] == '1')
        {
            IsValid = true;
        }
        else
        {
            IsValid = false;
            break;
        }
    }

    if (IsValid)
    {
        HexOutStream << std::hex << std::bitset<64>(InputStr).to_ullong();   /* Fills Stream with StdString Input*/
        HexOutStream >> HexOutStr;
        QString HexOutQS = QString::fromStdString(HexOutStr);   /* Convert HexOutStdStr to QString */
        ui->lineHex->setText(HexOutQS); /* Sets lineHex value*/

        DecOutStream << std::dec << std::bitset<64>(InputStr).to_ullong();
        DecOutStream >> DecOutStr;
        QString DecOutQS = QString::fromStdString(DecOutStr);   /* Convert DecOutStdStr to QString */
        ui->lineDec->setText(DecOutQS); /* Sets lineDec value*/
    }
    else
    {
        msgBox.setText("\nInvalid Binary Input\n");
        msgBox.setWindowTitle("Notify");
        msgBox.exec();
    }
}

void BaseConvert::DecInput()
{
    std::stringstream InputStream;
    std::stringstream HexOutStream;
    std::stringstream DecOutStream;
    std::string HexOutStr;
    std::string DecOutStrFinal;
    unsigned long long InputStreamOut;
    bool IsValid = false;

    QString InputQS = ui->lineDec->text();   /* Gets value in lineDec */
    std::string InputStr = InputQS.toStdString(); /* Turns QString Input into StdString Input */


    for (size_t i = 0; i < InputStr.length(); i++)
    {
        if (InputStr[i] == '0' || InputStr[i] == '1' || InputStr[i] == '2' || InputStr[i] == '3' || 
            InputStr[i] == '4' || InputStr[i] == '5' || InputStr[i] == '6' || InputStr[i] == '7' || 
            InputStr[i] == '8' || InputStr[i] == '9')
        {
            IsValid = true;
        }
        else
        {
            IsValid = false;
            break;
        }
    }

    if (IsValid)
    {
        InputStream << std::dec << InputStr;
        InputStream >> InputStreamOut;
        HexOutStream << std::hex << (std::bitset<64>(InputStreamOut)).to_ullong();
        HexOutStream >> HexOutStr;
        QString HexOutQS = QString::fromStdString(HexOutStr);
        ui->lineHex->setText(HexOutQS); /* Sets lineHex value */


        std::string DecOutStr = std::bitset<64>(InputStreamOut).to_string();
        DecOutStream << std::hex << DecOutStr;
        DecOutStream >> DecOutStrFinal;
        QString DecOutQS = QString::fromStdString(DecOutStrFinal);
        ui->lineBin->setText(DecOutQS); /* Sets lineBin value */
    }
    else
    {
        msgBox.setText("\nInvalid Decimal Input\n");
        msgBox.setWindowTitle("Notify");
        msgBox.exec();
    }
}