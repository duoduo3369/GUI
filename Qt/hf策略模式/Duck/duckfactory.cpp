#include "duckfactory.h"
#include "greenduck.h"
#include "testduck.h"
DuckFactory::DuckFactory()
{
}
Duck* DuckFactory::create(QString duckType)
{
    if(duckType == QString::fromLocal8Bit("测试的鸭子"))
    {
        return new TestDuck;
    }
    else if(duckType == QString::fromLocal8Bit("绿色的鸭子") )
    {
        return new GreenDuck;
    }
    else
    {
        return NULL;
    }
}
