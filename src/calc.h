#ifndef CALC_H
#define CALC_H

#include <QWidget>
#include <QCloseEvent>

namespace Ui {
class Calc;
}

class Calc : public QWidget
{
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = nullptr);
    ~Calc();

private:
    Ui::Calc *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
  //  void ChangeNumberSignPressed();

};

#endif // CALC_H
