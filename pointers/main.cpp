#include <iostream>

using namespace std;

int FOO = 12;

int* doStuff() {
    return &FOO;
}

void someTest() {
    int value(5);
    int *ptr = &value;
    *ptr = 22;

    cout << value;
}

void getsNullPtr(nullptr_t ptr) {
    cout << "Bellooo!";
}

void pointersAndArrays() {
    // For any “pointer to pointer to WTF am I reading?!” craziness
    // http://www.codeproject.com/Articles/7042/How-to-interpret-complex-C-C-declarations
    // can be a clarifying article.
    // basically read from right to left.

    int array[] = {9, 7, 3, 8, 5, 6};

    // The address of the first element.
    cout << &array[0];
    // The address of the array;
    cout << array;
    // Dereferencing will give the first element:
    cout << *array;

    int *ptr = array;

    int (*pointsToTheActualArray)[6] = &array;

    cout << *ptr;

    // Note that we’re not actually dereferencing the array itself. The array (of type int[6])
    // gets implicitly converted into a pointer (of type int *).
}

void printSize(int *array) {

    // This gives the size of the pointer, and it’s misleading.
    cout << sizeof(array);
}

int main() {
    cout << "Hello, World!" << endl;

    int lorem[] = {1,2,3};

    // Array decays into a pointer to an int.
    cout << sizeof(lorem); // this gives the correct size.
    printSize(lorem);

    //int[] ipsum = {3,4,5};

    int8_t a = 3;

    int test(12);

    cout << test << endl;
    cout << &test << endl;
    cout << *&test << endl;

    int *nullPointer(0);
    int *anotherNullPointer(NULL);
    int *yetAnotherNullPointer(nullptr);

    getsNullPtr(nullptr);

    if (nullPointer) {
        cout << "Pointer is null";
    } else {
        cout << "Pointer is not null";
    }

    // &: returns a pointer of type X, if (i.e. if &someInt, it will return a pointer to int)
    // it does not return the variable’s address; it returns a pointer to that variable instead.

    int *iPtr;
    double *dPtr;

    // Direct initialization:
    int bar(42);
    // Initialization by creating a temp object:
    int foo = 42;
    // Same as above, just we explicitly constructed the temp object:
    int baz = int(42);

    int* iPtr2;
    double* dPtr2;

    int* axx, b; // Caveat: axx is a pointer; but b is an int!
               // Probably that’s not what you wanted.
               // When declaring it’s better to put the asterisk
               // next to the variable.

    int foox = 55;
    //int *bazx = &foox;
    int *bazx;
    bazx = &foox;

    cout << *bazx; // dereferencing.

    return 0;
}
