#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rightcat.h"
#include "downcat.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    QWidget *centerWindow = new QWidget(this);
    this->setCentralWidget(centerWindow);

    QVBoxLayout *mainLayout = new QVBoxLayout;

    mainLayout->addWidget(new RightCat(this));
    mainLayout->addWidget(new DownCat(this));

    centerWindow->setLayout(mainLayout);
    this->setGeometry (20,20,1024,768);
}

MainWindow::~MainWindow()
{

    delete ui;
}
