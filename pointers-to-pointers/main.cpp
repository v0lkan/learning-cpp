#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    int value = 5;
    int *ptr;
    int **ptrptr;
    ptr = &value;
    ptrptr = &ptr;

    cout << *ptr;
    cout << *ptrptr;

    int **array = new int*[10];

    // int (*bozo)[5] = new int[10][5];

    auto array3 = new int[10][5];

    for (int count = 0; count < 10; count++) {
        array[count] = new int[5];
    }

    for (int count = 0; count < 10; count++) {
        delete[] array[count];
    }
    delete[] array;

    // Flatten array. That’s less error-prone.
    // index = row * numCols + col
    int *arrayf = new int[50];

    // Avoid using pointers to pointers unless no other valid options are available.

    return 0;
}
