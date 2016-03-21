#ifndef COMPOSITION_CREATURE_H
#define COMPOSITION_CREATURE_H

#include <iostream>
#include <string>
#include "Point2D.h"

class Creature {
private:
    std::string name;
    Point2D location;

public:
    Creature(std::string aName, const Point2D &aLocation):
        name(aName), location(aLocation) {}

    friend std::ostream& operator<<(std::ostream& out, const Creature &creature) {
        out << creature.name << " is at " << creature.location;

        return out;
    }

    void moveTo(int x, int y) {
        location.setPoint(x, y);
    }
};

#endif
