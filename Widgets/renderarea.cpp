#include "renderarea.h"
#include <QPainter>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(440, 200);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

}
