#include <iostream>
#include <vector>

using namespace std;

/*
C++ does not support static constructors.
 */

class Something {
private:
    static int value;
public:
    static int getValue() { return value; };
};

class MyClass {
public:
    static vector<char> myChars;
};

class Dongi {
public:
    static vector<char> myChars;

public:
    class _init { // defining a nested class
    public:
        _init() {
            myChars.push_back('a');
            myChars.push_back('b');
            myChars.push_back('c');
        }
    };
private:
    static _init initializer;
};

// Initializing static member variables programmatically (i.e. poor man’s static constructor).
vector<char> Dongi::myChars;
Dongi::_init Dongi::initializer; // define; this will call the _init default constructor.


vector<char> MyClass::myChars = {'a', 'b', 'c'};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
