#include <iostream>
#include <cstdint>

using namespace std;

/*
The smallest addressable unit of memory is a group of 8 bits known as a byte.
 */

int main() {
    cout << "Hello, World!" << endl;

    int8_t a = 24;

    bool isBool = true;
    char xa = 'c';
    wchar_t t = 't';
    char16_t x = 'x';
    char32_t y = 'y';
    short foo = 12;
    long bar = 44;
    int baz = 23;
    long long bat = 22;

    cout << "bool:\t\t" << sizeof(bool) << "\tbytes." << endl;
    cout << "bar:\t\t" << sizeof(bar) << "\tbytes." << endl;

    int value{42};

    return 0;
}