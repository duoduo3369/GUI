#ifndef QUACKBEHAVIORFACTORY_H
#define QUACKBEHAVIORFACTORY_H
#include "quackbehavior.h"

class QuackBehaviorFactory
{
public:
    QuackBehaviorFactory();
    static QuackBehavior* create(QString qbType);
};

#endif // QUACKBEHAVIORFACTORY_H
