#include "rundown.h"


RunDown::RunDown(QRect *rect,int speed,int time,
                     QWidget *window,QWidget *parent):
      Runnable(rect,speed,time,window,parent)
{
}

void RunDown::runSlot(QRect *rect)
{

    int height = rect->height ();
    this->rect->setY (rect->y () + speed);
    this->rect->setHeight (height);
    window->repaint ();
}
RunDown::~RunDown()
{
}
