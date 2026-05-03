/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *userface;
    QPushButton *buttzero;
    QPushButton *buttenter;
    QPushButton *buttplus;
    QPushButton *butt3;
    QPushButton *buttfrac;
    QPushButton *butt2;
    QPushButton *butt1;
    QPushButton *butt6;
    QPushButton *butt4;
    QPushButton *butt9;
    QPushButton *butt5;
    QPushButton *butt7;
    QPushButton *butt8;
    QPushButton *buttminus;
    QPushButton *buttstar;
    QPushButton *buttslash;
    QToolButton *butttriangle;
    QPushButton *buttsquar;
    QPushButton *butt1overx;
    QPushButton *buttroot;
    QPushButton *buttback;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(431, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        userface = new QLabel(centralwidget);
        userface->setObjectName("userface");
        userface->setGeometry(QRect(10, 10, 411, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font.setPointSize(15);
        userface->setFont(font);
        userface->setMouseTracking(false);
        userface->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        buttzero = new QPushButton(centralwidget);
        buttzero->setObjectName("buttzero");
        buttzero->setGeometry(QRect(10, 430, 211, 61));
        QFont font1;
        font1.setPointSize(15);
        buttzero->setFont(font1);
        buttenter = new QPushButton(centralwidget);
        buttenter->setObjectName("buttenter");
        buttenter->setGeometry(QRect(340, 350, 81, 141));
        buttenter->setFont(font1);
        buttplus = new QPushButton(centralwidget);
        buttplus->setObjectName("buttplus");
        buttplus->setGeometry(QRect(340, 220, 81, 121));
        buttplus->setFont(font1);
        butt3 = new QPushButton(centralwidget);
        butt3->setObjectName("butt3");
        butt3->setGeometry(QRect(230, 360, 101, 61));
        butt3->setFont(font1);
        buttfrac = new QPushButton(centralwidget);
        buttfrac->setObjectName("buttfrac");
        buttfrac->setGeometry(QRect(230, 430, 101, 61));
        QFont font2;
        font2.setPointSize(20);
        buttfrac->setFont(font2);
        butt2 = new QPushButton(centralwidget);
        butt2->setObjectName("butt2");
        butt2->setGeometry(QRect(120, 360, 101, 61));
        butt2->setFont(font1);
        butt1 = new QPushButton(centralwidget);
        butt1->setObjectName("butt1");
        butt1->setGeometry(QRect(10, 360, 101, 61));
        butt1->setFont(font1);
        butt6 = new QPushButton(centralwidget);
        butt6->setObjectName("butt6");
        butt6->setGeometry(QRect(230, 290, 101, 61));
        butt6->setFont(font1);
        butt4 = new QPushButton(centralwidget);
        butt4->setObjectName("butt4");
        butt4->setGeometry(QRect(10, 290, 101, 61));
        butt4->setFont(font1);
        butt9 = new QPushButton(centralwidget);
        butt9->setObjectName("butt9");
        butt9->setGeometry(QRect(230, 220, 101, 61));
        butt9->setFont(font1);
        butt5 = new QPushButton(centralwidget);
        butt5->setObjectName("butt5");
        butt5->setGeometry(QRect(120, 290, 101, 61));
        butt5->setFont(font1);
        butt7 = new QPushButton(centralwidget);
        butt7->setObjectName("butt7");
        butt7->setGeometry(QRect(10, 220, 101, 61));
        butt7->setFont(font1);
        butt8 = new QPushButton(centralwidget);
        butt8->setObjectName("butt8");
        butt8->setGeometry(QRect(120, 220, 101, 61));
        butt8->setFont(font1);
        buttminus = new QPushButton(centralwidget);
        buttminus->setObjectName("buttminus");
        buttminus->setGeometry(QRect(340, 100, 81, 41));
        buttminus->setFont(font1);
        buttstar = new QPushButton(centralwidget);
        buttstar->setObjectName("buttstar");
        buttstar->setGeometry(QRect(230, 100, 101, 41));
        buttstar->setFont(font1);
        buttslash = new QPushButton(centralwidget);
        buttslash->setObjectName("buttslash");
        buttslash->setGeometry(QRect(120, 100, 101, 41));
        buttslash->setFont(font1);
        butttriangle = new QToolButton(centralwidget);
        butttriangle->setObjectName("butttriangle");
        butttriangle->setGeometry(QRect(10, 100, 101, 41));
        butttriangle->setFont(font1);
        buttsquar = new QPushButton(centralwidget);
        buttsquar->setObjectName("buttsquar");
        buttsquar->setGeometry(QRect(120, 150, 101, 61));
        buttsquar->setFont(font1);
        butt1overx = new QPushButton(centralwidget);
        butt1overx->setObjectName("butt1overx");
        butt1overx->setGeometry(QRect(230, 150, 101, 61));
        butt1overx->setFont(font1);
        buttroot = new QPushButton(centralwidget);
        buttroot->setObjectName("buttroot");
        buttroot->setGeometry(QRect(10, 150, 101, 61));
        buttroot->setFont(font1);
        buttroot->setStyleSheet(QString::fromUtf8(""));
        buttback = new QPushButton(centralwidget);
        buttback->setObjectName("buttback");
        buttback->setGeometry(QRect(340, 150, 81, 61));
        buttback->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        userface->setText(QString());
        buttzero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        buttenter->setText(QCoreApplication::translate("MainWindow", "Enter ", nullptr));
        buttplus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        butt3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        buttfrac->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        butt2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        butt1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        butt6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        butt4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        butt9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        butt5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        butt7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        butt8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        buttminus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttstar->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttslash->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        butttriangle->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        buttsquar->setText(QCoreApplication::translate("MainWindow", "\302\262x", nullptr));
        butt1overx->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        buttroot->setText(QCoreApplication::translate("MainWindow", "root(x)", nullptr));
        buttback->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
