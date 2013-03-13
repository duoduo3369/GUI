#include "flybehaviorfactory.h"
#include "flyquickly.h"
#include "flyslowly.h"

FlyBehaviorFactory::FlyBehaviorFactory()
{
}
FlyBehavior* FlyBehaviorFactory::create(QString fbType)
{
    if(fbType == QString::fromLocal8Bit("���ٵķ�"))
    {
        return new FlyQuickly;
    }
    else if(fbType == QString::fromLocal8Bit("�����ķ�"))
    {
        return new FlySlowly;
    }
    else
    {
        return NULL;
    }
}
