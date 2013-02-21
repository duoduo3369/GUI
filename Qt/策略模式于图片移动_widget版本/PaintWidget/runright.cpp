#include "runright.h"

RunRight::RunRight(QRect *rect,int speed,int time,
                   QWidget *window,QWidget *parent):
    Runnable(rect,speed,time,window,parent)
{
}
void RunRight::runSlot(QRect *rect)
{

    int width = rect->width ();
    this->rect->setX (rect->x ()+ speed);
    this->rect->setWidth (width);
    window->repaint ();
}
RunRight::~RunRight()
{
}
