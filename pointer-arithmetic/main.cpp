#include <iostream>

using namespace std;

void characterArrays() {

    // Generally the memory that the compiler puts "Hasan"
    // is read-only; and also multiple string literals with the
    // same content may share the same memory location.
    const char *samurai = "Hasan";

    cout << samurai;

    // This is just regular array initialization; nothing is read-only.
    char ninja[] = "Osman";

    cout << ninja;
}

void loopDaLoop() {
    const int SIZE = 7;
    char name[SIZE] = "Volkan";
    int numVowels(0);

    for (char *ptr = name; ptr < name + SIZE; ptr++) {
        switch(*ptr) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                numVowels++;
        }
    }

    cout << numVowels;
}

int main() {
    cout << "Hello, World!" << endl;

    int value = 42;
    int *ptr = &value;

    cout << ptr;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;
    // They will all be evenly distributed.

    int array[] = {1, 2, 3, 4};

    cout << &array[0] << endl;
    cout << *(array) << endl;
    cout << &array[1] << endl;
    cout << array + 1 << endl;
    cout << *(array + 1) << endl;
    cout << &array[2] << endl;
    cout << array + 2 << endl;
    cout << *(array + 2) << endl;
    cout << &array[3] << endl;
    cout << array + 3 << endl;
    cout << *(array + 3) << endl;

    // So behind the scenes: `array[n]` is actually `*(array + n)`.

    return 0;
}
