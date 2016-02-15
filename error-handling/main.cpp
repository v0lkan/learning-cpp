#include <iostream>
#include <assert.h>

// Will cause all assertions to be ignored to the end of file.
#define NDEBUG;

using namespace std;

void test(int a) {
    assert(a >= 100);
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
