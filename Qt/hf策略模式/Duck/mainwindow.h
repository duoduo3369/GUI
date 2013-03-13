#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "duck.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void setDuck(Duck *duck);
    ~MainWindow();
public slots:
    void quack();
    void fly();
    void changeDuck(QString duckType);
    void changeFlyBehavior(QString behaviorType);
    void changeQuackBehavior(QString behaviorType);
private:
    Ui::MainWindow *ui;
    Duck *duck;
    int duckPicWidth;
    int duckPicHeight;
};

#endif // MAINWINDOW_H
