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
    QPushButton *HelloWorldButton;
    QPushButton *Calculator;
    QPushButton *Close;
    QPushButton *AutoDeployProject;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(246, 146);
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
        HelloWorldButton = new QPushButton(centralwidget);
        HelloWorldButton->setObjectName(QString::fromUtf8("HelloWorldButton"));
        HelloWorldButton->setCheckable(false);

        gridLayout->addWidget(HelloWorldButton, 0, 1, 1, 1);

        Calculator = new QPushButton(centralwidget);
        Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setCheckable(false);

        gridLayout->addWidget(Calculator, 1, 1, 1, 1);

        Close = new QPushButton(centralwidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        gridLayout->addWidget(Close, 5, 1, 1, 1);

        AutoDeployProject = new QPushButton(centralwidget);
        AutoDeployProject->setObjectName(QString::fromUtf8("AutoDeployProject"));

        gridLayout->addWidget(AutoDeployProject, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "My Programs", nullptr));
        HelloWorldButton->setText(QCoreApplication::translate("MainWindow", "Hello World (Notify)", nullptr));
        Calculator->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        AutoDeployProject->setText(QCoreApplication::translate("MainWindow", "Deploy Qt Exe (Windows)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
