#ifndef FLYBEHAVIORFACTORY_H
#define FLYBEHAVIORFACTORY_H
#include "flybehavior.h"
class FlyBehaviorFactory
{
public:
    FlyBehaviorFactory();
    static FlyBehavior* create(QString fbType);
};

#endif // FLYBEHAVIORFACTORY_H
