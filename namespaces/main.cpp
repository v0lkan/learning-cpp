#include <iostream>
#include "foo.h"

using namespace std;

int main() {
    Foo::doSomething(3, 4);

    // C-style casts are not checked by the compiler at compile time
    float f = (float)12 / 23;

    // This introduces compile-time checking.
    float g = static_cast<float>(12) / 23;

    cout << "Hello, World!" << endl;
    return 0;
}