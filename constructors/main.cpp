#include <iostream>

using namespace std;

// Moving declerations to a header file
#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int year, int month, int day);
    void setDate(int year, int month, int day);
};

#endif

Date::Date(int year, int month, int day) { }
void Date::setDate(int year, int month, int day) { }

class Calc {
private:
    int value = 0;

public:
    // Chaining.
    // `this` is a pointer to the object itself.
    // we are also returning a Calc object by reference.
    Calc& add(int value) {this->value += value; return *this;}
};

class MyString {
private:
    char *innerString = nullptr;
    int length = 0;
    int data = 0;
public:
    void setData(int data) {
        this->data = data;
    }

    // RAII: Acquire dynamic memory upon initialization; clean it up on destruction.
    MyString(const char *string = "") {
        if (string == nullptr) {
            string = ""; // "" is a C-style string literal.
        }

        length = 0;

        while (string[length] != '\0') {
            length++;
        }

        innerString = new char[length];

        for (int i = 0; i < length; i++) {
            innerString[i] = string[i];
        }
    }

    ~MyString() {
        delete[] innerString;
    }

    char* getString() {return innerString;}
    int getLength() {return length;}
};

class Foo {
private:
    void doA() {};
    void doB() {};

public:
    Foo() {
        doA();
    }

    Foo(int value) {
        // `Foo()` might not work as expected in pre-C++11 compilers;
        // call a non-constructor function instead.
        doA();
        doB();
    }

    // Delegating constructor.
    // Make sure to call the constructor from the member initializer list
    // not from the body of the constructor.
    Foo(double value): Foo() {

    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
