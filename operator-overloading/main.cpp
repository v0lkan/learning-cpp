#include <iostream>
#include <assert.h>

using namespace std;

class Cents {
private:
    Cents(const Cents *pCents);

    int cents;
    int value = 42;

public:
    Cents(int cents) {this->cents = cents;}

    // Copy constructor.
    Cents(const Cents &source) {

        // our parameter “is a” cents, so we can access its
        // internal variables.
        cents = source.cents;
    }

    friend Cents operator+ (const Cents &c1, const Cents &c2);
    friend ostream& operator<< (ostream &out, Cents &cents);
    friend istream& operator>> (istream &in, Cents &cents);
    friend bool operator== (Cents &c1, Cents &c2);
    friend bool operator!= (Cents &c1, Cents &c2);
    friend Cents operator- (const Cents &cents);
    friend bool operator! (const Cents &cents);

    Cents operator+ ();
    Cents operator++ (); // prefix.
    Cents operator++ (int); // postfix,
    int& operator[] (const int index);
    operator int() {return 42;}
    Cents& operator= (const Cents &source);

    int getCents() {return cents;}
};

Cents operator+ (const Cents &c1, const Cents &c2) {
    return Cents(c1.cents + c2.cents);
};

ostream& operator<< (ostream &out, Cents &cents) {
    out << "{" << cents.cents << "}";

    return out;
}

istream& operator>> (istream &in, Cents &cents) {
    int buffer = 0;

    in >> buffer;

    cents.cents = buffer + 42;

    return in;
}

int main() {
    cout << "Hello, World!" << endl;

    // Cents volkan(5); // calls the default constructor.
    // Cents daniel = volkan; // calls the copy constructor.

    /*
        If a new object has to be created before copying can occur, then the
        copy constructor is used.

        If a new object does not have to be created before copying can occur,
        the assignment operator is used.

        Copy constructor is used…

        1. When instantiating an object, and initializing its values by
         from another object.
        2. When passing an object by value.
        3.When an object is returned by value.

        In each of these cases, a new variable has to be created before the
        values can be copied over — hence the copy constructor is used.
     */

    Cents cents1(6);
    Cents cents2(12);

    cout << (cents1 + cents2).getCents() << endl;

    return 0;
}

bool operator== (Cents &c1, Cents &c2) {
    return false;
}

bool operator!= (Cents &c1, Cents &c2) {
    return false;
}

Cents operator- (const Cents &cents) {
    return Cents(-cents.cents);
}

bool operator! (const Cents &cents) {
    return false;
}

Cents Cents::operator+ () {
    return Cents(0);
}

Cents Cents::operator++ () {
    this->cents++;
    return *this;
}

Cents Cents::operator++ (int i) {
    return Cents(0);
}

int& Cents::operator[] (const int index) {
    return this->value;
}

class Matrix {
private:
    double data[4][4];

public:
    Matrix() {
        for (int col = 0; col < 4; col++) {
            for (int row = 0; row < 4; row++) {
                data[row][col] = 0.0;
            }
        }
    }

    double& operator()(const int col, const int row);
    void operator()();
};

double &Matrix::operator()(const int col, const int row) {
    assert(row >= 0 && col < 4);
    assert(col >= 0 && row < 4);

    return data[row][col];
}

void Matrix::operator()() {
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 4; row++) {
            data[row][col] = 0.0;
        }
    }
}

Cents& Cents::operator= (const Cents &source) {

    // Check for self-assignment:
    if (this == &source) {
        return *this;
    }

    cents = source.cents;

    return *this;
}

class MyString {
private:
    char *str;
    long length;

public:
    MyString(char const *str="") {
        length = strlen(str) + 1;

        this->str = new char[length];

        strncpy(this->str, str, (size_t) length);

        this->str[length - 1] = '\0';
    }

    ~MyString() {
        delete[] str;
        str = 0;
    }

    char* getString() {return str;}
    long getLength() {return length;}

    MyString& operator= (const MyString& source);
};

/*
    MyString orig("Hello world"); // use default copy constructor.

  {
    MyString copied = orig;
  }

  // copied goes out of scope.

  cout << orig.getString(); // This will crash (when default copy constructor is used)!

    put these to `private:` block to prevent copying of the class.
    MyString(const MyString& Source);
    MyString& operator= (const MyString& Source);
 */


MyString &MyString::operator=(const MyString &source) {
    if (this == &source) {
        return *this;
    }

    delete[] str;

    // We can shallow copy non-pointer-types.
    length = source.length;

    if (source.str) {
        str = new char[length];

        strncpy(str, source.str, (size_t) length);
    } else {
        str = 0;
    }

    return *this;
}
