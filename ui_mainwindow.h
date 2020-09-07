/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Calculator;
    QPushButton *BaseConverter;
    QPushButton *AutoDeployProject;
    QPushButton *Close;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(251, 177);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Calculator = new QPushButton(centralwidget);
        Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setCheckable(false);

        gridLayout->addWidget(Calculator, 0, 1, 1, 1);

        BaseConverter = new QPushButton(centralwidget);
        BaseConverter->setObjectName(QString::fromUtf8("BaseConverter"));

        gridLayout->addWidget(BaseConverter, 2, 1, 1, 1);

        AutoDeployProject = new QPushButton(centralwidget);
        AutoDeployProject->setObjectName(QString::fromUtf8("AutoDeployProject"));

        gridLayout->addWidget(AutoDeployProject, 1, 1, 1, 1);

        Close = new QPushButton(centralwidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        gridLayout->addWidget(Close, 4, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gouda", nullptr));
        Calculator->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        BaseConverter->setText(QCoreApplication::translate("MainWindow", "Base Converter", nullptr));
        AutoDeployProject->setText(QCoreApplication::translate("MainWindow", "Deploy Qt Exe (Windows)", nullptr));
        Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
