#include <iostream>
#include <string>
#include "Creature.h"
#include "Point2D.h"

using namespace std;

class Teacher {
private:
    string name;

public:
    Teacher(string aName): name(aName) {}

    string getName() {return name;}
};

class Department {
private:
    Teacher *teacher;

public:
    Department(Teacher *aTeacher=NULL) {
       teacher = aTeacher;
    }
};


int main() {
    cout << "Hello, World!" << endl;

    Teacher *teacher = new Teacher("Bob");

    {
        Department dept(teacher);
    }

    // dept goes out of scope and gets destroyed.
    // teacher is still alive though.

    delete teacher;


    cout << "Enter a name for your creature: ";
    string name;
    cin >> name;

    Creature creature(name, Point2D(4, 7));

    while(1) {
        cout << creature << endl;
        cout << "new x location (-1 to quit)." << endl;
        int x = 0;
        cin >> x;

        if (x == -1) {break;}

        cout << "new y location (-1 to quit)." << endl;
        int y = 0;
        cin >> y;

        if (y == -1) {break;}

        creature.moveTo(x, y);
    }

    return 0;
}
