#include <iostream>

using namespace std;

// Best practice is to declare the default parameters in header
// files, but not inside the actual functions.
void printValues2(int x, int y=10, int z=42);

void printValues2(int x, int y, int z) {
    ;
}

void printValues(int x, int y=10, int z=42) {
    ;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
