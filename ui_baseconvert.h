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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseConvert
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *labelHex;
    QLabel *labelBin;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QLabel *labelDec;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineHex;
    QLineEdit *lineBin;
    QLineEdit *lineDec;

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
        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);

        labelHex = new QLabel(centralwidget);
        labelHex->setObjectName(QString::fromUtf8("labelHex"));
        labelHex->setMaximumSize(QSize(16777215, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
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

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 5, 1, 1);

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

        labelDec = new QLabel(centralwidget);
        labelDec->setObjectName(QString::fromUtf8("labelDec"));
        labelDec->setMaximumSize(QSize(16777215, 24));
        labelDec->setFont(font);
        labelDec->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelDec, 1, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);

        lineHex = new QLineEdit(centralwidget);
        lineHex->setObjectName(QString::fromUtf8("lineHex"));
        lineHex->setMinimumSize(QSize(190, 32));
        lineHex->setMaximumSize(QSize(120, 32));
        lineHex->setFont(font);

        gridLayout_2->addWidget(lineHex, 3, 1, 1, 1);

        lineBin = new QLineEdit(centralwidget);
        lineBin->setObjectName(QString::fromUtf8("lineBin"));
        lineBin->setMinimumSize(QSize(650, 32));
        lineBin->setMaximumSize(QSize(650, 32));
        lineBin->setFont(font);

        gridLayout_2->addWidget(lineBin, 3, 3, 1, 1);

        lineDec = new QLineEdit(centralwidget);
        lineDec->setObjectName(QString::fromUtf8("lineDec"));
        lineDec->setMinimumSize(QSize(211, 32));
        lineDec->setMaximumSize(QSize(211, 32));
        lineDec->setFont(font);

        gridLayout_2->addWidget(lineDec, 3, 5, 1, 1);

        BaseConvert->setCentralWidget(centralwidget);

        retranslateUi(BaseConvert);

        QMetaObject::connectSlotsByName(BaseConvert);
    } // setupUi

    void retranslateUi(QMainWindow *BaseConvert)
    {
        BaseConvert->setWindowTitle(QCoreApplication::translate("BaseConvert", "MainWindow", nullptr));
        labelHex->setText(QCoreApplication::translate("BaseConvert", "Hex", nullptr));
        labelBin->setText(QCoreApplication::translate("BaseConvert", "Bin", nullptr));
        checkBox->setText(QCoreApplication::translate("BaseConvert", "Signed", nullptr));
        labelDec->setText(QCoreApplication::translate("BaseConvert", "Dec", nullptr));
        lineHex->setPlaceholderText(QCoreApplication::translate("BaseConvert", "0x0000000000000000", nullptr));
        lineBin->setPlaceholderText(QCoreApplication::translate("BaseConvert", "0000000000000000000000000000000000000000000000000000000000000000", nullptr));
        lineDec->setPlaceholderText(QCoreApplication::translate("BaseConvert", "00000000000000000000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BaseConvert: public Ui_BaseConvert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASECONVERT_H
