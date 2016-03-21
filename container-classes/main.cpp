#include <iostream>
#include "IntArray.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    IntArray array(10);

    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }

    array.resize(8);

    array.insertBefore(20, 5);
    array.remove(3);
    array.insertAtEnd(30);
    array.insertAtBeginning(20);

    for (int j = 0; j < array.getLength(); j++) {
        cout << array[j] << " ";
    }

    cout << endl;

    return 0;
}
