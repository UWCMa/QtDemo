#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const override;
    QSize sizeHint()        const override;

    void setBackgroundColor(const QColor& color);
    QColor getBackgroundColor() const;

    enum Shapes {Astroid = 0, Cycloid, HuyhensCycloid, HypoCycloid};
protected:
    void paintEvent(QPaintEvent *event) override;

signals:
private:
    QColor mBackgroundColor;
    QColor mShapeColor;
};

#endif // RENDERAREA_H
