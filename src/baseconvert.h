#ifndef BASECONVERT_H
#define BASECONVERT_H

#include <QMainWindow>
#include <QMessageBox>
#include <sstream>
#include <bitset>

namespace Ui {
class BaseConvert;
}

class BaseConvert : public QMainWindow
{
    Q_OBJECT

public:
    explicit BaseConvert(QWidget *parent = nullptr);
    ~BaseConvert();

private:
    Ui::BaseConvert *ui;
    QMessageBox msgBox;

public slots:
    void HexInput();
    void BinInput();
    void DecInput(); 
};

#endif // BASECONVERT_H
