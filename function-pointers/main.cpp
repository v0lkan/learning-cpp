#include <iostream>

using namespace std;

// Foo is actually a constant pointer to a function.
int foo() { // 0X00223FAC
    return 5;
}

bool ascending(int a, int b) {
    return 0;
}

void selectionSort(int *array, int size, bool (*comparator)(int, int)=ascending);

int main() {
    foo(); // jump to address 0X00223FAC

    int (*fnPtr)(); // This is one of the ugliest things I’ve seen so far!

    // int (*fnPtr)();
    //             ^__dangling dog balls!

    fnPtr = foo;

    (*fnPtr)();

    // Implicit dereference is also possible in MOST compilers.
    (fnPtr)();

    bool (*comparisonFnPtr)(int, int);

    cout << "Hello, World!" << endl;
    return 0;
}
