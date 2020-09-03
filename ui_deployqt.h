/********************************************************************************
** Form generated from reading UI file 'deployqt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPLOYQT_H
#define UI_DEPLOYQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeployQt
{
public:
    QWidget *centralwidget;
    QPushButton *QtBinDirBrowse;
    QLabel *QtBinDirLabel;
    QLineEdit *QtBinDirOut;
    QLabel *QtInputExeLabel;
    QLineEdit *QtInputExeOut;
    QPushButton *QtInputExeBrowse;
    QPushButton *DeployButton;
    QPushButton *CancelButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeployQt)
    {
        if (DeployQt->objectName().isEmpty())
            DeployQt->setObjectName(QString::fromUtf8("DeployQt"));
        DeployQt->resize(750, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeployQt->sizePolicy().hasHeightForWidth());
        DeployQt->setSizePolicy(sizePolicy);
        DeployQt->setMinimumSize(QSize(750, 250));
        DeployQt->setMaximumSize(QSize(750, 250));
        centralwidget = new QWidget(DeployQt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QtBinDirBrowse = new QPushButton(centralwidget);
        QtBinDirBrowse->setObjectName(QString::fromUtf8("QtBinDirBrowse"));
        QtBinDirBrowse->setGeometry(QRect(410, 40, 75, 23));
        QtBinDirLabel = new QLabel(centralwidget);
        QtBinDirLabel->setObjectName(QString::fromUtf8("QtBinDirLabel"));
        QtBinDirLabel->setGeometry(QRect(20, 20, 181, 16));
        QtBinDirOut = new QLineEdit(centralwidget);
        QtBinDirOut->setObjectName(QString::fromUtf8("QtBinDirOut"));
        QtBinDirOut->setGeometry(QRect(20, 40, 381, 20));
        QtInputExeLabel = new QLabel(centralwidget);
        QtInputExeLabel->setObjectName(QString::fromUtf8("QtInputExeLabel"));
        QtInputExeLabel->setGeometry(QRect(20, 90, 101, 16));
        QtInputExeOut = new QLineEdit(centralwidget);
        QtInputExeOut->setObjectName(QString::fromUtf8("QtInputExeOut"));
        QtInputExeOut->setGeometry(QRect(20, 110, 381, 20));
        QtInputExeBrowse = new QPushButton(centralwidget);
        QtInputExeBrowse->setObjectName(QString::fromUtf8("QtInputExeBrowse"));
        QtInputExeBrowse->setGeometry(QRect(410, 110, 75, 23));
        DeployButton = new QPushButton(centralwidget);
        DeployButton->setObjectName(QString::fromUtf8("DeployButton"));
        DeployButton->setGeometry(QRect(110, 170, 75, 23));
        CancelButton = new QPushButton(centralwidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(250, 170, 75, 23));
        DeployQt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeployQt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 21));
        DeployQt->setMenuBar(menubar);
        statusbar = new QStatusBar(DeployQt);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DeployQt->setStatusBar(statusbar);

        retranslateUi(DeployQt);

        QMetaObject::connectSlotsByName(DeployQt);
    } // setupUi

    void retranslateUi(QMainWindow *DeployQt)
    {
        DeployQt->setWindowTitle(QCoreApplication::translate("DeployQt", "Deploy Qt Exe (Windows)", nullptr));
        QtBinDirBrowse->setText(QCoreApplication::translate("DeployQt", "Browse", nullptr));
        QtBinDirLabel->setText(QCoreApplication::translate("DeployQt", "Qt Bin Directory", nullptr));
        QtInputExeLabel->setText(QCoreApplication::translate("DeployQt", "Qt Input Exe", nullptr));
        QtInputExeBrowse->setText(QCoreApplication::translate("DeployQt", "Browse", nullptr));
        DeployButton->setText(QCoreApplication::translate("DeployQt", "Deploy", nullptr));
        CancelButton->setText(QCoreApplication::translate("DeployQt", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeployQt: public Ui_DeployQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPLOYQT_H
