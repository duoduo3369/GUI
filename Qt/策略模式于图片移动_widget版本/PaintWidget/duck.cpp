#include "duck.h"

Duck::Duck(QWidget *parent) :
    QWidget(parent)
{
    label = new QLabel();
    movie = new QMovie(":/img/duck.gif");
    label->setMovie (movie);
    movie->start ();
    label->show ();
}

Duck::Duck(const QString &duckImgPath,QWidget *parent) :
    QWidget(parent),duckImgPath(duckImgPath)
{
    label = new QLabel;
    movie = new QMovie(duckImgPath);
    label->setMovie (movie);
    movie->start ();
    label->show ();
}

void Duck::setMovie(const QString & fileName)
{
    movie->setFileName (fileName);
}
void Duck::paintEvent (QPaintEvent *event)
{
}
void Duck::mouseMoveEvent(QMouseEvent *event)
{
}
Duck::~Duck ()
{
    delete label;
    delete movie;
}
