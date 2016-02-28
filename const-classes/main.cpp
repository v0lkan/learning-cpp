#include <iostream>
#include "Date.h"

using namespace std;

const int value1 = 6;
const int value2(7);
const int value3{9};

/*
Once const object has been initialized you cannot
modify the member variables of that object.
 */
const Date date1;
const Date date2(2020, 10, 16);
const Date date3{2020, 10, 16};

class Something {
public:
    int value;

    Something() {
        value = 0;
    }

    void resetValue() {value = 0;}
    void setValue(int value) {this->value = value;}

    // This is a const member function.
    // You an only get values of const objects via const member functions.
    // Trying to get them through regular getters will cause an exception.
    int getValue() const { return value; }

    // You can overload it. — Non-const objects will call this version instead.
    int getValue() {return value;}
};

/*
Passing a class argument by value will cause a copy of the class to be made
(which is slow). Most of the time, we don’t need a copy. Reference to the original
arguments will work just fine, and it’s more performant because it avoids copying.
We typically pass by const reference to ensure that the function does not
inadvertently change the argument.
 */

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
