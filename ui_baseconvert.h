/********************************************************************************
** Form generated from reading UI file 'baseconvert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASECONVERT_H
#define UI_BASECONVERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseConvert
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *textDec;
    QLabel *labelDec;
    QSpacerItem *verticalSpacer;
    QTextEdit *textHex;
    QTextEdit *textBin;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelHex;
    QLabel *labelBin;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *BaseConvert)
    {
        if (BaseConvert->objectName().isEmpty())
            BaseConvert->setObjectName(QString::fromUtf8("BaseConvert"));
        BaseConvert->resize(1159, 158);
        BaseConvert->setMinimumSize(QSize(1159, 158));
        BaseConvert->setMaximumSize(QSize(1159, 158));
        centralwidget = new QWidget(BaseConvert);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 4, 1, 1);

        textDec = new QTextEdit(centralwidget);
        textDec->setObjectName(QString::fromUtf8("textDec"));
        textDec->setMinimumSize(QSize(211, 32));
        textDec->setMaximumSize(QSize(211, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
        textDec->setFont(font);

        gridLayout_2->addWidget(textDec, 3, 5, 1, 1);

        labelDec = new QLabel(centralwidget);
        labelDec->setObjectName(QString::fromUtf8("labelDec"));
        labelDec->setMaximumSize(QSize(16777215, 24));
        labelDec->setFont(font);
        labelDec->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelDec, 1, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);

        textHex = new QTextEdit(centralwidget);
        textHex->setObjectName(QString::fromUtf8("textHex"));
        textHex->setMinimumSize(QSize(190, 32));
        textHex->setMaximumSize(QSize(120, 32));
        textHex->setFont(font);

        gridLayout_2->addWidget(textHex, 3, 1, 1, 1);

        textBin = new QTextEdit(centralwidget);
        textBin->setObjectName(QString::fromUtf8("textBin"));
        textBin->setMinimumSize(QSize(650, 32));
        textBin->setMaximumSize(QSize(400, 32));
        textBin->setFont(font);

        gridLayout_2->addWidget(textBin, 3, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        labelHex = new QLabel(centralwidget);
        labelHex->setObjectName(QString::fromUtf8("labelHex"));
        labelHex->setMaximumSize(QSize(16777215, 24));
        labelHex->setFont(font);
        labelHex->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelHex, 1, 1, 1, 1);

        labelBin = new QLabel(centralwidget);
        labelBin->setObjectName(QString::fromUtf8("labelBin"));
        labelBin->setMinimumSize(QSize(650, 0));
        labelBin->setMaximumSize(QSize(400, 24));
        labelBin->setFont(font);
        labelBin->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelBin, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(647, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(0, 0));
        checkBox->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 5, 1, 1);

        BaseConvert->setCentralWidget(centralwidget);

        retranslateUi(BaseConvert);

        QMetaObject::connectSlotsByName(BaseConvert);
    } // setupUi

    void retranslateUi(QMainWindow *BaseConvert)
    {
        BaseConvert->setWindowTitle(QCoreApplication::translate("BaseConvert", "MainWindow", nullptr));
        textDec->setPlaceholderText(QCoreApplication::translate("BaseConvert", "18446744073709551615", nullptr));
        labelDec->setText(QCoreApplication::translate("BaseConvert", "Dec", nullptr));
        textHex->setPlaceholderText(QCoreApplication::translate("BaseConvert", "0xFFFFFFFFFFFFFFFF", nullptr));
        textBin->setPlaceholderText(QCoreApplication::translate("BaseConvert", "0101010101010101010101010101010101010101010101010101010101010101", nullptr));
        labelHex->setText(QCoreApplication::translate("BaseConvert", "Hex", nullptr));
        labelBin->setText(QCoreApplication::translate("BaseConvert", "Bin", nullptr));
        checkBox->setText(QCoreApplication::translate("BaseConvert", "Signed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BaseConvert: public Ui_BaseConvert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASECONVERT_H
