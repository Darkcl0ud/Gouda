#ifndef BASECONVERT_H
#define BASECONVERT_H

#include <QMainWindow>

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
};

#endif // BASECONVERT_H
