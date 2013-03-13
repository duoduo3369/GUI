#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H
#include <QString>
class FlyBehavior
{
public:
    FlyBehavior();
    virtual QString fly()=0;
};

#endif // FLYBEHAVIOR_H
