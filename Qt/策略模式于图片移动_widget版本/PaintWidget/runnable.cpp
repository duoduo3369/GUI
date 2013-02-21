#include "runnable.h"

Runnable::Runnable(QRect *rect,int speed,int time,
                   QWidget *window, QWidget *parent) :
    QWidget(parent)
{

    stop = true;
    this->window = window;
    this->speed = speed;
    this->time = time;
    timer = new QTimer(this);
    this->rect = new QRect(rect->topLeft (),rect->bottomRight ());
    connect( this, SIGNAL( clicked() ), this, SLOT( timerTurnSlot() ) );
    connect( this, SIGNAL( runSignal(QRect *) ), this, SLOT( runSlot(QRect *)) );
    connect( timer,SIGNAL(timeout()),this,SLOT(run()));
}

QRect* Runnable::getRect()
{
    return rect;
}
void Runnable::mousePressEvent(QMouseEvent *event)
{

    if (rect->contains (event->x(),event->y()))
    {
        stop = !stop;
        emit clicked();
    }
}
void Runnable::run()
{
    emit runSignal(rect);
}
void Runnable::timerTurnSlot ()
{
    if(!stop)
    {
        timer->start (time);
    }
    else
    {
        timer->stop ();
    }

}
Runnable::~Runnable()
{
    delete timer;
    delete rect;
}
