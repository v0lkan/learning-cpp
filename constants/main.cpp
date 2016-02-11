#include <iostream>
#include <cmath>
#include <bitset>
#include "constants.h"
using namespace std;

// Global variables:
int globalCounter(0);

// Can only be used within this file:
static int osman(44);

// Can be used anywhere in the program:
extern int jack;
extern const double PI;
const double PI = 3.14;

/*
 C++ does not define the order in which function arguments are evaluated.
 */

int main() {
    int x{4};
    int y(5);

    bitset<8> bits;

    int globalCounter(42);

    ::globalCounter++;

    int z = 4* constants::PI;

    cout << PI;

    double f = pow(3.0, 5.2);

    const double GRAVITY(9.81);
    constexpr double GRAVY(GRAVITY);

    cout << "Hello, World!" << x << y << endl;
    return 0;
}