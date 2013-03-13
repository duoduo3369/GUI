#include "greenduck.h"
#include "flyslowly.h"
#include "quackquietly.h"

GreenDuck::GreenDuck()
{
    selfPicture = new QPixmap(":/cat.jpg");
    this->setFlyBehavior(new FlySlowly());
    this->setQuackBehavior(new QuackQuietly());
}
GreenDuck::~GreenDuck()
{
    delete selfPicture;
    delete getFlyBehavior();
    delete getQuackBehavior();
}
