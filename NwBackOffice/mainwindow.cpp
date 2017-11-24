#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>  // nécessaire pour utiliser un QSqlDatabase

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
