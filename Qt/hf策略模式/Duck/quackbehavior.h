#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H
#include <QString>
class QuackBehavior
{
public:
    QuackBehavior();
    virtual QString quack()=0;
};

#endif // QUACKBEHAVIOR_H
