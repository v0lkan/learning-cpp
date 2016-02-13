#include <iostream>

using namespace std;

void pointersAndConst() {
    int value = 5;
    int *ptr = &value;
    *ptr = 7;

    const int value2 = 5;
    int *ptr2 = &value; // pointer to int (where int is constant).
    // *ptr2 = 12; // will not compile!

    int otherValue = 42;
    const int *ptr3 = &otherValue; // pointer to constant int.

    int anotherValue = 11;
    int *const ptr4 = &anotherValue; // constant pointer to int.

    const int *const ptr5 = &value; // constant pointer to constant int.

    // The type of value the pointer points to is always on the far left.
}

void dynamicallyAllocatingArrays() {
    int size;
    cin >> size;

    int *array = new int[size];
    int *array2 = new int[size](); // Initializes all to zero.
    int *array3 = new int[5] {1,2,3,4,5}; // Initialize using initializer list.
    int fixedArray[5] {1,2,3,4,5};

    array[0] = 5;

    delete[] array; // Use array delete to deallocate array; or you’ll suffer!
    array = nullptr;
}

void leakSomeMemory() {
    int *ptr = new int;
}

void leakDifferently() {
    int value = 5;
    int *ptr = new int;
    ptr = &value; // Old memory location is lost forever w/o being reclaimed.
}

void leakViaDoubleAllocation() {
    int *value = new int;
    value = new int;
}

int main() {
    cout << "Hello, World!" << endl;

    // Dynamically allocate an integer in Heap (instead of stack where auto allocation
    // occurs and memory is limited and yadda yadda); and assign its address to ptr.
    int *ptr = new int;

    // Good boys clean their mess:
    delete ptr;
    ptr = nullptr;

    // Safe assignment; will be nullptr if malloc fails.
    int *value = new (nothrow) int;

    if (value) {
        delete value;
        value = nullptr;

        // This is a noop.
        delete value;
    }

    return 0;
}
