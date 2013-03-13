#include "duckfactory.h"
#include "greenduck.h"
#include "testduck.h"
DuckFactory::DuckFactory()
{
}
Duck* DuckFactory::create(QString duckType)
{
    if(duckType == QString::fromLocal8Bit("���Ե�Ѽ��"))
    {
        return new TestDuck;
    }
    else if(duckType == QString::fromLocal8Bit("��ɫ��Ѽ��") )
    {
        return new GreenDuck;
    }
    else
    {
        return NULL;
    }
}
