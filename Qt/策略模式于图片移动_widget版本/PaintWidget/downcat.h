#ifndef DOWNCAT_H
#define DOWNCAT_H
#include "cat.h"
class DownCat : public Cat
{
public:

    DownCat(QWidget *parent);
    ~DownCat();
protected:
    void init();
};

#endif // DOWNCAT_H
