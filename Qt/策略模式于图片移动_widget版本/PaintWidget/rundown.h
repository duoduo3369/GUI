#ifndef RUNDOWN_H
#define RUNDOWN_H
#include <QtGui>
#include "runnable.h"
class RunDown : public Runnable
{
public:
    explicit RunDown(QRect *rect,int speed,int time,
                     QWidget *window,QWidget *parent=0);
    ~RunDown();
public slots:
    void runSlot(QRect *rect);
};

#endif // RUNDOWN_H
