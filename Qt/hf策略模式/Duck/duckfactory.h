#ifndef DUCKFACTORY_H
#define DUCKFACTORY_H
#include "duck.h"
class DuckFactory
{
public:
    DuckFactory();
    static Duck* create(QString duckType);
};

#endif // DUCKFACTORY_H
