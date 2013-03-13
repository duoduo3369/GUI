#include "flybehaviorfactory.h"
#include "flyquickly.h"
#include "flyslowly.h"

FlyBehaviorFactory::FlyBehaviorFactory()
{
}
FlyBehavior* FlyBehaviorFactory::create(QString fbType)
{
    if(fbType == QString::fromLocal8Bit("快速的飞"))
    {
        return new FlyQuickly;
    }
    else if(fbType == QString::fromLocal8Bit("慢慢的飞"))
    {
        return new FlySlowly;
    }
    else
    {
        return NULL;
    }
}
