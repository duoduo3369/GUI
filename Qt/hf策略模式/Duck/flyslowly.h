#ifndef FLYSLOWLY_H
#define FLYSLOWLY_H
#include "flybehavior.h"

class FlySlowly : public FlyBehavior
{
public:
    FlySlowly();
    QString fly();
};

#endif // FLYSLOWLY_H
