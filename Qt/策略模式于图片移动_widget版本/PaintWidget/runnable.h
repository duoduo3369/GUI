#ifndef RUNNABLE_H
#define RUNNABLE_H

#include <QtGui>

class Runnable : public QWidget
{
    Q_OBJECT
public:
    explicit Runnable(QRect *rect,int speed,int time,
                      QWidget *window,QWidget *parent=0);
    virtual ~Runnable();
    void mousePressEvent(QMouseEvent *event);
    QRect* getRect();

protected:
    QTimer *timer;
    QRect *rect;
    QWidget *window;
    int speed;
    int time;
    bool stop;
signals:
    void runSignal(QRect *rect);
    void clicked();
public slots:
    void run();
    void timerTurnSlot();
    virtual void runSlot(QRect *rect)=0;

};

#endif // RUNNABLE_H
