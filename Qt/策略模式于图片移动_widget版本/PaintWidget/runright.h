#ifndef RUNRIGHT_H
#define RUNRIGHT_H
#include <QtGui>
#include "runnable.h"
class RunRight : public Runnable
{

public:
    explicit RunRight(QRect *rect,int speed,int time,
                      QWidget *window, QWidget *parent);
    virtual ~RunRight();

public slots:
    void runSlot(QRect *rect);
};

#endif // RUNRIGHT_H
