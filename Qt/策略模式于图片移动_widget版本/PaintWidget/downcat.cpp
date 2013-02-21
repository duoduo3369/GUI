#include "downcat.h"
#include "rundown.h"
DownCat::DownCat(QWidget *parent):
    Cat(parent)
{
    init ();
}

void DownCat::init()
{
    catImg = new QPixmap(":/img/black_cat.jpg");
    int width = catImg->width ()/shrinkMultiple;
    int height = catImg->height ()/shrinkMultiple;
    runnable = new RunDown(new QRect(10,10,width,height),
                            5,50,parentWidgetPointer,this);
}
DownCat::~DownCat()
{

}
