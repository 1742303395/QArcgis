#include "tabwidget.h"
#include<QDebug>
#include<QLabel>
tabWidget::tabWidget(QWidget* parent):QWidget(parent)
{
    view = new QGraphicsView(this);
    scene = new QGraphicsScene();
    view->setScene(this->scene);
}
void tabWidget::addItem(pixmapItem *p)
{

    scene->addItem(p);
    p->setPos(100,50);
    qDebug()<<" widget menubar tabwidget tabWidget:: add item";
}
void tabWidget::addDivider(QString str)
{

    // create label and set position
    QLabel* label = new QLabel(this);
    label->setText(str);
    label->setGeometry(5, rear - 3, width() - 10, 20);

    // create a divider and set stylesheet
    QFrame* divider = new QFrame(this);
    divider->setGeometry(5, rear + 5, width() - 10, 1);
    divider->setStyleSheet("background-color: gray;");

    // adjust the pos of rear
    rear += 5;
}

