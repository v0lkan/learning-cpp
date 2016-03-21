#ifndef COMPOSITION_POINT2D_H_H
#define COMPOSITION_POINT2D_H_H

#include <iostream>

class Point2D {
private:
    int x;
    int y;

public:
    Point2D(): x(0), y(0) {}
    Point2D(int aX, int aY): x(aX), y(aY) {}

    friend std::ostream& operator <<(std::ostream& out, const Point2D &point) {
        out << "(" << point.x << ", " << point.y << ")";

        return out;
    }

    int getX() const {return x;}
    int getY() const {return y;}

    void setPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

#endif
