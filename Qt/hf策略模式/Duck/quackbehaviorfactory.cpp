#include "quackbehaviorfactory.h"
#include "quackloudly.h"
#include "quackquietly.h"

QuackBehaviorFactory::QuackBehaviorFactory()
{
}
QuackBehavior* QuackBehaviorFactory::create(QString qbType)
{
    if(qbType == QString::fromLocal8Bit("´óÉùµÄ½Ð"))
    {
        return new QuackLoudly;
    }
    if(qbType == QString::fromLocal8Bit("ÈõÈõµÄ½Ð"))
    {
        return new QuackQuietly;
    }
    else
    {
        return NULL;
    }
}
