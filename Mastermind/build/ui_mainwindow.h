/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startti;
    QLineEdit *arpoja;
    QLabel *info;
    QPushButton *eka;
    QPushButton *toka;
    QPushButton *kolmas;
    QPushButton *neljas;
    QPushButton *check;
    QTextBrowser *Lokki;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startti = new QPushButton(centralwidget);
        startti->setObjectName("startti");
        startti->setGeometry(QRect(230, 80, 80, 24));
        arpoja = new QLineEdit(centralwidget);
        arpoja->setObjectName("arpoja");
        arpoja->setGeometry(QRect(50, 80, 113, 24));
        info = new QLabel(centralwidget);
        info->setObjectName("info");
        info->setGeometry(QRect(30, 50, 321, 16));
        eka = new QPushButton(centralwidget);
        eka->setObjectName("eka");
        eka->setGeometry(QRect(10, 260, 80, 61));
        toka = new QPushButton(centralwidget);
        toka->setObjectName("toka");
        toka->setGeometry(QRect(100, 260, 80, 61));
        kolmas = new QPushButton(centralwidget);
        kolmas->setObjectName("kolmas");
        kolmas->setGeometry(QRect(190, 260, 80, 61));
        neljas = new QPushButton(centralwidget);
        neljas->setObjectName("neljas");
        neljas->setGeometry(QRect(280, 260, 80, 61));
        check = new QPushButton(centralwidget);
        check->setObjectName("check");
        check->setGeometry(QRect(420, 260, 111, 61));
        Lokki = new QTextBrowser(centralwidget);
        Lokki->setObjectName("Lokki");
        Lokki->setGeometry(QRect(550, 30, 191, 491));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 10, 101, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startti->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        eka->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        toka->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        kolmas->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        neljas->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        check->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pelitapahtumat:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
