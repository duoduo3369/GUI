#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "duck.h"
#include "cat.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
