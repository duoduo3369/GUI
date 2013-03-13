#include "duck.h"

Duck::Duck(QObject *parent) :
    QObject(parent)
{
}
QString Duck::performFly()
{
    return flyBehavior->fly();
}
QString Duck::performQuack()
{
    return quackBehavior->quack();
}
void Duck::setFlyBehavior(FlyBehavior *flyBehavior)
{
    this->flyBehavior = flyBehavior;
}
void Duck::setQuackBehavior(QuackBehavior *quackBehavior)
{
    this->quackBehavior = quackBehavior;
}
FlyBehavior* Duck::getFlyBehavior()
{
    return flyBehavior;
}
QuackBehavior* Duck::getQuackBehavior()
{
    return quackBehavior;
}
QPixmap* Duck::display()
{
    return selfPicture;
}
