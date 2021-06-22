#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionVer_Informacion,SIGNAL(triggered(bool)),this, SLOT(miPrimerSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::miPrimerSlot()
{
    ui->tabWidget->setCurrentIndex(1);
}

