#include <iostream>

using namespace std;

void addOne(int &y) {
    y = y + 1;
}

// This won’t work as expected since addresses are passed by value.
void setToNull(int *tempPtr) {
    tempPtr = nullptr;
}

// This will work as we are passing a reference to a pointer to an int.
void properSetToNull(int *&tempPtr) {
    tempPtr = nullptr;
}

void printArray(const int* array, int length) {
    for (int i = 0; i < length; i++) {
        cout << array[i] << " " << endl;
    }
}

int* allocateArray() {
    return new int[5];
}

int& returnByRef(int &ref) {
    return ref;
}

// This is typically used with arrays and dynamically allocated variables.
void increment(int *item) {
    *item = *item + 1;
}

int main() {
    cout << "Hello, World!" << endl;

    // Passing classes and structs by value has a significant performance penalty.

    return 0;
}
