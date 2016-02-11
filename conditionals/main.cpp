#include <iostream>

using namespace std;

/*
 When converting integers to booleans, the integer zero resolves to boolean false,
 whereas non-zero integers all resolve to true.
 */

int main() {
    cout << "Hello, World!" << endl;

    bool b(true);

    if (b) {
        cout << "b is true" << endl;
    } else {
        cout << "b is false" << endl;
    }

    cout << "\x6F\x22\x3F";
    cout << "\234\122\77";

    int octal = 012;
    int hexa = 0x44;
    int bin = 0b10110101101;

    char c1(97);
    char c2('a');

    int z = static_cast<int>(c2);

    return 0;
}