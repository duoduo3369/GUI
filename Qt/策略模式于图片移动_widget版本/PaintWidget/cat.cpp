#include "cat.h"
#include "runright.h"
#include "rundown.h"

Cat::Cat(QWidget *parent) :
    QWidget(parent),shrinkMultiple(2)
{
    parentWidgetPointer = parent;
}
void Cat::setRunnable(Runnable *r)
{
    if(!runnable)
    {
        runnable = r;
    }
    else
    {
        Runnable *old = runnable;
        runnable = r;
        delete old;
    }
}
void Cat::mousePressEvent(QMouseEvent *event)
{
    runnable->mousePressEvent(event);
}
void Cat::paintEvent (QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(*runnable->getRect (),*catImg);
}

Cat::~Cat()
{
    if(catImg)
    {
        delete catImg;
    }
    if(runnable)
    {
        delete runnable;
    }

}


