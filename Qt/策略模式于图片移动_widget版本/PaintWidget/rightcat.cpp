#include "rightcat.h"
#include "runright.h"
RightCat::RightCat(QWidget *parent):
    Cat(parent)
{
    init ();
}

void RightCat::init()
{
    catImg = new QPixmap(":/img/little_cat.jpg");
    int width = catImg->width ()/shrinkMultiple;
    int height = catImg->height ()/shrinkMultiple;
    runnable = new RunRight(new QRect(10,10,width,height),
                            5,50,parentWidgetPointer,this);
}

RightCat::~RightCat()
{

}
