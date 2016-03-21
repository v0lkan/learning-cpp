#include <iostream>

using namespace std;

class Base {
protected:
    int value;

public:
    Base(int value): value(value) {}

    const char* getName() {return "Base";}
    int getValue() {return value;}
};

class Derived: public Base {
public:
    Derived(int value): Base(value) {}

    const char* getName() {return "Derived";}
    int getDoubleValue() {return value * 2;}
};

class Animal {
protected:
    string name;

    // Protected; you cannot create animal objects directly
    // but derived classes can use it.
    Animal(string name): name(name) {}

public:
    string getName() {return name;}
    virtual const char* speak() {return "???";}
};

class Cat: public Animal {
public:
    Cat(string name): Animal(name) {}
    const char* speak() {return "Meow!";}
};

class Dog: public Animal {
public:
    Dog(string name): Animal(name) {}
    const char* speak() {return "Woof!";}
};



int main() {
    cout << "Hello, World!" << endl;

    Derived derived(5);

    cout << "Derived is a " << derived.getName() <<
        " and has value " << derived.getValue() << endl;

    Derived &rDerived = derived;

    cout << "rDerived is a " << rDerived.getName() <<
    " and has value " << rDerived.getValue() << endl;

    Derived *pDerived = &derived;

    cout << "pDerived is a " << pDerived->getName() <<
    " and has value " << pDerived->getValue() << endl;

    Base &rBase = derived;
    Base *pBase = &derived;

    Cat cat("Fred");
    Dog dog("Garbo");

    Animal *pAnimal = &cat;

    cout << pAnimal->speak() << endl;

    pAnimal = &dog;

    cout << pAnimal->speak() << endl;

    return 0;
}
