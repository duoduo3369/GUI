#ifndef DUCK_H
#define DUCK_H

#include <QObject>
#include <QPixmap>
#include "flybehavior.h"
#include "quackbehavior.h"

class Duck : public QObject
{
    Q_OBJECT
public:
    explicit Duck(QObject *parent = 0);
    virtual QString performFly();
    virtual QString performQuack();
    void setFlyBehavior(FlyBehavior *flyBehavior);
    void setQuackBehavior(QuackBehavior *quackBehavior);
    FlyBehavior *getFlyBehavior();
    QuackBehavior *getQuackBehavior();
    virtual QPixmap *display();
    virtual ~Duck(){};
protected:
    QPixmap *selfPicture;
private:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

signals:
    
public slots:
    
};

#endif // DUCK_H
