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
    QPushButton *buttsquar;
    QPushButton *butt1overx;
    QPushButton *buttroot;
    QPushButton *buttback;
    QPushButton *buttpown;
    QPushButton *sinbutt;
    QPushButton *delbuttn;
    QPushButton *cosbutt;
    QPushButton *tanbutt;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(430, 599);
        MainWindow->setMinimumSize(QSize(430, 599));
        MainWindow->setMaximumSize(QSize(430, 599));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        userface = new QLabel(centralwidget);
        userface->setObjectName("userface");
        userface->setGeometry(QRect(10, 20, 411, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font.setPointSize(15);
        userface->setFont(font);
        userface->setMouseTracking(false);
        userface->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        buttzero = new QPushButton(centralwidget);
        buttzero->setObjectName("buttzero");
        buttzero->setGeometry(QRect(10, 520, 211, 61));
        QFont font1;
        font1.setPointSize(15);
        buttzero->setFont(font1);
        buttenter = new QPushButton(centralwidget);
        buttenter->setObjectName("buttenter");
        buttenter->setGeometry(QRect(340, 440, 81, 141));
        buttenter->setFont(font1);
        buttplus = new QPushButton(centralwidget);
        buttplus->setObjectName("buttplus");
        buttplus->setGeometry(QRect(340, 310, 81, 121));
        buttplus->setFont(font1);
        butt3 = new QPushButton(centralwidget);
        butt3->setObjectName("butt3");
        butt3->setGeometry(QRect(230, 450, 101, 61));
        butt3->setFont(font1);
        buttfrac = new QPushButton(centralwidget);
        buttfrac->setObjectName("buttfrac");
        buttfrac->setGeometry(QRect(230, 520, 101, 61));
        QFont font2;
        font2.setPointSize(20);
        buttfrac->setFont(font2);
        butt2 = new QPushButton(centralwidget);
        butt2->setObjectName("butt2");
        butt2->setGeometry(QRect(120, 450, 101, 61));
        butt2->setFont(font1);
        butt1 = new QPushButton(centralwidget);
        butt1->setObjectName("butt1");
        butt1->setGeometry(QRect(10, 450, 101, 61));
        butt1->setFont(font1);
        butt6 = new QPushButton(centralwidget);
        butt6->setObjectName("butt6");
        butt6->setGeometry(QRect(230, 380, 101, 61));
        butt6->setFont(font1);
        butt4 = new QPushButton(centralwidget);
        butt4->setObjectName("butt4");
        butt4->setGeometry(QRect(10, 380, 101, 61));
        butt4->setFont(font1);
        butt9 = new QPushButton(centralwidget);
        butt9->setObjectName("butt9");
        butt9->setGeometry(QRect(230, 310, 101, 61));
        butt9->setFont(font1);
        butt5 = new QPushButton(centralwidget);
        butt5->setObjectName("butt5");
        butt5->setGeometry(QRect(120, 380, 101, 61));
        butt5->setFont(font1);
        butt7 = new QPushButton(centralwidget);
        butt7->setObjectName("butt7");
        butt7->setGeometry(QRect(10, 310, 101, 61));
        butt7->setFont(font1);
        butt8 = new QPushButton(centralwidget);
        butt8->setObjectName("butt8");
        butt8->setGeometry(QRect(120, 310, 101, 61));
        butt8->setFont(font1);
        buttminus = new QPushButton(centralwidget);
        buttminus->setObjectName("buttminus");
        buttminus->setGeometry(QRect(340, 170, 81, 61));
        buttminus->setFont(font1);
        buttstar = new QPushButton(centralwidget);
        buttstar->setObjectName("buttstar");
        buttstar->setGeometry(QRect(120, 170, 101, 61));
        buttstar->setFont(font1);
        buttslash = new QPushButton(centralwidget);
        buttslash->setObjectName("buttslash");
        buttslash->setGeometry(QRect(10, 170, 101, 61));
        buttslash->setFont(font1);
        buttsquar = new QPushButton(centralwidget);
        buttsquar->setObjectName("buttsquar");
        buttsquar->setGeometry(QRect(120, 240, 101, 61));
        QFont font3;
        font3.setPointSize(18);
        buttsquar->setFont(font3);
        butt1overx = new QPushButton(centralwidget);
        butt1overx->setObjectName("butt1overx");
        butt1overx->setGeometry(QRect(230, 170, 101, 61));
        butt1overx->setFont(font1);
        buttroot = new QPushButton(centralwidget);
        buttroot->setObjectName("buttroot");
        buttroot->setGeometry(QRect(10, 240, 101, 61));
        buttroot->setFont(font1);
        buttroot->setStyleSheet(QString::fromUtf8(""));
        buttback = new QPushButton(centralwidget);
        buttback->setObjectName("buttback");
        buttback->setGeometry(QRect(340, 240, 81, 61));
        buttback->setFont(font1);
        buttpown = new QPushButton(centralwidget);
        buttpown->setObjectName("buttpown");
        buttpown->setGeometry(QRect(230, 240, 101, 61));
        buttpown->setFont(font3);
        sinbutt = new QPushButton(centralwidget);
        sinbutt->setObjectName("sinbutt");
        sinbutt->setGeometry(QRect(10, 100, 101, 61));
        sinbutt->setFont(font1);
        delbuttn = new QPushButton(centralwidget);
        delbuttn->setObjectName("delbuttn");
        delbuttn->setGeometry(QRect(340, 100, 81, 61));
        delbuttn->setFont(font1);
        cosbutt = new QPushButton(centralwidget);
        cosbutt->setObjectName("cosbutt");
        cosbutt->setGeometry(QRect(120, 100, 101, 61));
        cosbutt->setFont(font1);
        tanbutt = new QPushButton(centralwidget);
        tanbutt->setObjectName("tanbutt");
        tanbutt->setGeometry(QRect(230, 100, 101, 61));
        tanbutt->setFont(font1);
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
        buttsquar->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        butt1overx->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        buttroot->setText(QCoreApplication::translate("MainWindow", "root(x)", nullptr));
        buttback->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        buttpown->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
        sinbutt->setText(QCoreApplication::translate("MainWindow", "Sin(\316\270)", nullptr));
        delbuttn->setText(QCoreApplication::translate("MainWindow", "del All", nullptr));
        cosbutt->setText(QCoreApplication::translate("MainWindow", "Cos(\316\270)", nullptr));
        tanbutt->setText(QCoreApplication::translate("MainWindow", "Tan(\316\270)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
