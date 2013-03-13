#include "testduck.h"
#include "flyquickly.h"
#include "quackloudly.h"
TestDuck::TestDuck()
{
    selfPicture = new QPixmap(":/book.jpg");
    this->setFlyBehavior(new FlyQuickly());
    this->setQuackBehavior(new QuackLoudly());
}
TestDuck::~TestDuck()
{
    delete selfPicture;
    delete getFlyBehavior();
    delete getQuackBehavior();
}
