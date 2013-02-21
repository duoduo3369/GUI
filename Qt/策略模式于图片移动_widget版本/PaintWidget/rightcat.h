#ifndef RIGHTCAT_H
#define RIGHTCAT_H

#include "cat.h"

class RightCat : public Cat
{
public:
    explicit RightCat(QWidget *parent = 0);
    ~RightCat();
protected:
    void init();

};

#endif // RIGHTCAT_H
