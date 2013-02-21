#ifndef CAT_H
#define CAT_H

#include <QtGui>
#include "runnable.h"
class Cat : public QWidget
{
    Q_OBJECT
public:
    explicit Cat(QWidget *parent = 0);
    virtual ~Cat();
    void setRunnable(Runnable *r);
protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent (QPaintEvent *event);
    virtual void init()=0;
protected:
    Runnable* runnable;
    QPixmap* catImg;
    QWidget* parentWidgetPointer;
    int shrinkMultiple;
};

#endif // CAT_H
