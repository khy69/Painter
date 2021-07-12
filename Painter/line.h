#ifndef LINE_H
#define LINE_H
#include "shape.h"

class Line : public Shape
{
public:
        Line();
        Line(QVector<QPoint *> points, ShapeType type, QRgb rgb, QPen pen);
        Line(int x1, int y1, int x2, int y2, ShapeType type, QRgb rgb, QPen pen);
        ~Line();
        //    add the second point
        void setPoint(QPoint a);
        //        find the point around a
        QPoint *isAround(QPoint a);
        //        whether a is in the rectangle of line
        bool isInside(QPoint a);
        void refreshData();

        void paintShape(QPainter &p, QImage *image, bool isSave);
        void paintFrame(QPainter &p);

        void move(int dx, int dy);

private:
        int x1, y1, x2, y2;
};

#endif // LINE_H
