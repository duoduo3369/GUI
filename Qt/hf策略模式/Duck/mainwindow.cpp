#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "greenduck.h"
#include "testduck.h"
#include "duckfactory.h"
#include "flybehaviorfactory.h"
#include "quackbehaviorfactory.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    duckPicWidth(480),duckPicHeight(320)
{
    ui->setupUi(this);
    duck = DuckFactory::create(ui->duckBox->currentText());
    ui->duckPicture->setPixmap(duck->display()->scaled(duckPicWidth,duckPicHeight));
    connect(ui->duckBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(changeDuck(QString)));
    connect(ui->flyButton,SIGNAL(clicked()),this,SLOT(fly()));
    connect(ui->quackButton,SIGNAL(clicked()),this,SLOT(quack()));
    connect(ui->flyBehaviorBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(changeFlyBehavior(QString)));
    connect(ui->quackBehaviorBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(changeQuackBehavior(QString)));
}
void MainWindow::quack()
{
    ui->display->addItem(duck->performQuack());
}
void MainWindow::fly()
{
    ui->display->addItem(duck->performFly());
}
void MainWindow::setDuck(Duck *duck)
{
    if(this->duck != NULL)
    {
        Duck *d = this->duck;
        delete d;
        d = NULL;
    }
    this->duck = duck;
    ui->duckPicture->setPixmap(duck->display()->scaled(duckPicWidth,duckPicHeight));
}
void MainWindow::changeDuck(QString duckType)
{
    ui->display->addItem(duckType);
    setDuck(DuckFactory::create(duckType));

}
void MainWindow::changeFlyBehavior(QString behaviorType)
{
    FlyBehavior *f = duck->getFlyBehavior();
    if(f)
    {
        delete f;
        f = NULL;
    }
    duck->setFlyBehavior(FlyBehaviorFactory::create(behaviorType));
}
void MainWindow::changeQuackBehavior(QString behaviorType)
{
    QuackBehavior *q = duck->getQuackBehavior();
    if(q)
    {
        delete q;
        q = NULL;
    }
    duck->setQuackBehavior(QuackBehaviorFactory::create(behaviorType));
}
MainWindow::~MainWindow()
{
    delete ui;
    delete duck;
}
