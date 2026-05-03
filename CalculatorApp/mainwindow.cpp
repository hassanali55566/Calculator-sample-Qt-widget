#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->userface->setText("Calc sample!!!!!");
    ui->userface->move(9,10);
    ui->userface->setStyleSheet("background-color: white;"
                                "border: 2px solid #000000;"
                                "border-radius: 0px;"




                                );
}

MainWindow::~MainWindow()
{
    delete ui;
}
