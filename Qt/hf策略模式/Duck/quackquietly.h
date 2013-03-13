#ifndef QUACKQUIETLY_H
#define QUACKQUIETLY_H
#include "quackbehavior.h"
class QuackQuietly : public QuackBehavior
{
public:
    QuackQuietly();
    QString quack();
};

#endif // QUACKQUIETLY_H
