#ifndef DUCK_H
#define DUCK_H

#include <QtGui>

class Duck : public QWidget
{
    Q_OBJECT
public:
    explicit Duck(QWidget *parent = 0);
    explicit Duck(const QString & duckImgPath,QWidget *parent = 0);
    ~Duck();
signals:
    
public slots:
protected:
    void paintEvent (QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void setMovie(const QString & fileName);

private:
    QLabel *label;
    QMovie *movie;
    QString duckImgPath;

};

#endif // DUCK_H
