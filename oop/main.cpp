#include <iostream>

using namespace std;

class Square {
private:
    double length = 1.0;
    double width = 1.0;

public:
    Square(int len, int wid): length{len}, width{wid} {}
};

class Fraction {
private:
    int numerator;
    int denominator;

    // Non-static class members can have default initialization.
    double width = 1.0;

public:
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    int getDenominator() {return denominator;}
    double getValue() {
            return static_cast<double>(numerator)/denominator;
    }
};

class Something {
private:
    const int a;

public:

    // Member initialization:
    Something(): a(12) {

    }

};

class Date {
public:
    int month;
    int day;
    int year;

    void print() {
        cout << year << "-" << month << "-" << day << endl;
    }
};

int main() {
    cout << "Hello, World!" << endl;

    Date today {10, 10, 2010};
    Fraction fraction(1, 3);
    today.day = 12;
    today.print();

    return 0;
}
