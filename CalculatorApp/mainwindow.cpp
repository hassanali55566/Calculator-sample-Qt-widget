#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>










MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    // Initial Display Setup
    ui->userface->setText("0");
    ui->userface->setStyleSheet("background-color: white;"
                                "border: 2px solid #000000;"
                                "border-radius: 0px;"
                                "qproperty-alignment: 'AlignVCenter | AlignRight';"
                                "font-size: 24px;"
                                "padding-right: 10px;");

    calcVal = 0.0;
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    powTrigger = false;
    userIsTypingSecondNumber = false;

    // Connect Numbers
    QPushButton *numButtons[10] = {
        ui->buttzero, ui->butt1, ui->butt2, ui->butt3, ui->butt4,
        ui->butt5, ui->butt6, ui->butt7, ui->butt8, ui->butt9
    };

    for(int i = 0; i < 10; ++i){
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

    // Connect Binary Math Operators (+, -, *, /, x^n)
    connect(ui->buttplus, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->buttminus, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->buttstar, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->buttslash, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->buttpown, SIGNAL(released()), this, SLOT(MathButtonPressed()));

    // Connect Utilities
    connect(ui->buttenter, SIGNAL(released()), this, SLOT(EqualButtonPressed()));
    connect(ui->buttfrac, SIGNAL(released()), this, SLOT(FractionButtonPressed()));
    connect(ui->buttback, SIGNAL(released()), this, SLOT(BackButtonPressed()));
    connect(ui->delbuttn, SIGNAL(released()), this, SLOT(ClearAllButtonPressed()));

    // Connect Unary Operators (Calculate immediately upon pressing)
    connect(ui->buttsquar, SIGNAL(released()), this, SLOT(UnaryButtonPressed()));
    connect(ui->buttroot, SIGNAL(released()), this, SLOT(UnaryButtonPressed()));
    // Based on previous files, assuming 1/x is named 'butt1overx'. If different, update this name.
    connect(ui->butt1overx, SIGNAL(released()), this, SLOT(UnaryButtonPressed()));
    connect(ui->sinbutt, SIGNAL(released()), this, SLOT(UnaryButtonPressed()));
    connect(ui->cosbutt, SIGNAL(released()), this, SLOT(UnaryButtonPressed()));
    connect(ui->tanbutt, SIGNAL(released()), this, SLOT(UnaryButtonPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NumPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->userface->text();

    if ((displayVal.toDouble() == 0 && !displayVal.contains(".")) || userIsTypingSecondNumber) {
        ui->userface->setText(butVal);
        userIsTypingSecondNumber = false;
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->userface->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void MainWindow::MathButtonPressed()
{
    // Reset all triggers first
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    powTrigger = false;

    QString displayVal = ui->userface->text();
    calcVal = displayVal.toDouble();

    // Use objectName() to determine operation instead of text()
    QPushButton *button = (QPushButton *)sender();
    QString btnName = button->objectName();

    if (btnName == "buttslash") {
        divTrigger = true;
    } else if (btnName == "buttstar") {
        multTrigger = true;
    } else if (btnName == "buttplus") {
        addTrigger = true;
    } else if (btnName == "buttminus") {
        subTrigger = true;
    } else if (btnName == "buttpown") {
        powTrigger = true;
    }

    ui->userface->setText("");
}

void MainWindow::EqualButtonPressed()
{
    double solution = 0.0;
    QString displayVal = ui->userface->text();
    double dblDisplayVal = displayVal.toDouble();

    if (addTrigger || subTrigger || multTrigger || divTrigger || powTrigger) {
        if (addTrigger) {
            solution = calcVal + dblDisplayVal;
        } else if (subTrigger) {
            solution = calcVal - dblDisplayVal;
        } else if (multTrigger) {
            solution = calcVal * dblDisplayVal;
        } else if (divTrigger) {
            // Basic divide by zero protection
            if (dblDisplayVal != 0.0) {
                solution = calcVal / dblDisplayVal;
            } else {
                ui->userface->setText("Error");
                return;
            }
        } else if (powTrigger) {
            solution = std::pow(calcVal, dblDisplayVal);
        }
    }

    ui->userface->setText(QString::number(solution, 'g', 16));
    userIsTypingSecondNumber = true;

    // Reset triggers
    addTrigger = false;
    subTrigger = false;
    multTrigger = false;
    divTrigger = false;
    powTrigger = false;
}

void MainWindow::UnaryButtonPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString btnName = button->objectName(); // Safer to use object name than unicode symbols
    double displayVal = ui->userface->text().toDouble();
    double solution = 0.0;

    if (btnName == "buttsquar") {
        solution = std::pow(displayVal, 2);
    } else if (btnName == "buttroot") {
        solution = std::sqrt(displayVal);
    } else if (btnName == "butt1overx") {
        if (displayVal != 0.0) {
            solution = 1.0 / displayVal;
        } else {
            ui->userface->setText("Error");
            return;
        }
    } else if (btnName == "sinbutt" || btnName == "cosbutt" || btnName == "tanbutt") {
        // Convert input from degrees to radians for C++ math library
        const double PI = 3.14159265358979323846;
        double radians = displayVal * (PI / 180.0);

        if (btnName == "sinbutt") {
            solution = std::sin(radians);
        } else if (btnName == "cosbutt") {
            solution = std::cos(radians);
        } else if (btnName == "tanbutt") {
            solution = std::tan(radians);
        }

        // Clean up floating point anomalies for numbers very close to 0
        if (std::abs(solution) < 1e-10) {
            solution = 0.0;
        }
    }

    ui->userface->setText(QString::number(solution, 'g', 16));
    userIsTypingSecondNumber = true;
}

void MainWindow::FractionButtonPressed()
{
    QString displayVal = ui->userface->text();
    if (!displayVal.contains(".")) {
        ui->userface->setText(displayVal + ".");
    }
}

void MainWindow::BackButtonPressed()
{
    QString displayVal = ui->userface->text();
    displayVal.chop(1);

    if (displayVal.isEmpty() || displayVal == "-") {
        displayVal = "0";
    }

    ui->userface->setText(displayVal);
}

void MainWindow::ClearAllButtonPressed()
{
    calcVal = 0.0;
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    powTrigger = false;
    userIsTypingSecondNumber = false;

    ui->userface->setText("0");
}