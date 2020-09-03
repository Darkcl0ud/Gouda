/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QPushButton *ButtonDivide;
    QPushButton *Button6;
    QPushButton *ButtonMultiply;
    QPushButton *Button5;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Button1;
    QPushButton *Button7;
    QPushButton *ButtonAC;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Button3;
    QPushButton *ButtonInvert;
    QPushButton *ButtonAdd;
    QPushButton *ButtonSubtract;
    QLineEdit *Display;
    QPushButton *ButtonEqual;

    void setupUi(QWidget *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QString::fromUtf8("Calc"));
        Calc->resize(412, 219);
        gridLayout = new QGridLayout(Calc);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button8 = new QPushButton(Calc);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        ButtonDivide = new QPushButton(Calc);
        ButtonDivide->setObjectName(QString::fromUtf8("ButtonDivide"));
        sizePolicy.setHeightForWidth(ButtonDivide->sizePolicy().hasHeightForWidth());
        ButtonDivide->setSizePolicy(sizePolicy);
        ButtonDivide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonDivide, 1, 3, 1, 1);

        Button6 = new QPushButton(Calc);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        ButtonMultiply = new QPushButton(Calc);
        ButtonMultiply->setObjectName(QString::fromUtf8("ButtonMultiply"));
        sizePolicy.setHeightForWidth(ButtonMultiply->sizePolicy().hasHeightForWidth());
        ButtonMultiply->setSizePolicy(sizePolicy);
        ButtonMultiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonMultiply, 2, 3, 1, 1);

        Button5 = new QPushButton(Calc);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button9 = new QPushButton(Calc);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button4 = new QPushButton(Calc);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button1 = new QPushButton(Calc);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button7 = new QPushButton(Calc);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        ButtonAC = new QPushButton(Calc);
        ButtonAC->setObjectName(QString::fromUtf8("ButtonAC"));
        sizePolicy.setHeightForWidth(ButtonAC->sizePolicy().hasHeightForWidth());
        ButtonAC->setSizePolicy(sizePolicy);
        ButtonAC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAC, 4, 0, 1, 1);

        Button2 = new QPushButton(Calc);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button0 = new QPushButton(Calc);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Button3 = new QPushButton(Calc);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        ButtonInvert = new QPushButton(Calc);
        ButtonInvert->setObjectName(QString::fromUtf8("ButtonInvert"));
        sizePolicy.setHeightForWidth(ButtonInvert->sizePolicy().hasHeightForWidth());
        ButtonInvert->setSizePolicy(sizePolicy);
        ButtonInvert->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonInvert, 4, 2, 1, 1);

        ButtonAdd = new QPushButton(Calc);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));
        sizePolicy.setHeightForWidth(ButtonAdd->sizePolicy().hasHeightForWidth());
        ButtonAdd->setSizePolicy(sizePolicy);
        ButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAdd, 3, 3, 1, 1);

        ButtonSubtract = new QPushButton(Calc);
        ButtonSubtract->setObjectName(QString::fromUtf8("ButtonSubtract"));
        sizePolicy.setHeightForWidth(ButtonSubtract->sizePolicy().hasHeightForWidth());
        ButtonSubtract->setSizePolicy(sizePolicy);
        ButtonSubtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonSubtract, 4, 3, 1, 1);

        Display = new QLineEdit(Calc);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: gray;\n"
"border: 1px solid gray;\n"
"color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        ButtonEqual = new QPushButton(Calc);
        ButtonEqual->setObjectName(QString::fromUtf8("ButtonEqual"));
        sizePolicy.setHeightForWidth(ButtonEqual->sizePolicy().hasHeightForWidth());
        ButtonEqual->setSizePolicy(sizePolicy);
        ButtonEqual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #00FF00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonEqual, 1, 4, 4, 1);


        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QWidget *Calc)
    {
        Calc->setWindowTitle(QCoreApplication::translate("Calc", "Form", nullptr));
        Button8->setText(QCoreApplication::translate("Calc", "8", nullptr));
        ButtonDivide->setText(QCoreApplication::translate("Calc", "/", nullptr));
        Button6->setText(QCoreApplication::translate("Calc", "6", nullptr));
        ButtonMultiply->setText(QCoreApplication::translate("Calc", "*", nullptr));
        Button5->setText(QCoreApplication::translate("Calc", "5", nullptr));
        Button9->setText(QCoreApplication::translate("Calc", "9", nullptr));
        Button4->setText(QCoreApplication::translate("Calc", "4", nullptr));
        Button1->setText(QCoreApplication::translate("Calc", "1", nullptr));
        Button7->setText(QCoreApplication::translate("Calc", "7", nullptr));
        ButtonAC->setText(QCoreApplication::translate("Calc", "AC", nullptr));
        Button2->setText(QCoreApplication::translate("Calc", "2", nullptr));
        Button0->setText(QCoreApplication::translate("Calc", "0", nullptr));
        Button3->setText(QCoreApplication::translate("Calc", "3", nullptr));
        ButtonInvert->setText(QCoreApplication::translate("Calc", "+/-", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("Calc", "+", nullptr));
        ButtonSubtract->setText(QCoreApplication::translate("Calc", "-", nullptr));
        Display->setText(QCoreApplication::translate("Calc", "0.0", nullptr));
        ButtonEqual->setText(QCoreApplication::translate("Calc", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
