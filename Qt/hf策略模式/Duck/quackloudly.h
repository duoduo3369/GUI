#ifndef QUACKLOUDLY_H
#define QUACKLOUDLY_H

#include "quackbehavior.h"

class QuackLoudly : public QuackBehavior
{
public:
    QuackLoudly();
    QString quack();
};
#endif // QUACKLOUDLY_H
