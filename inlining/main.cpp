#include <iostream>

using namespace std;

// Generally compiler will do this for you;
// And generally compilers are more intelligent than for you (wrt: inlining)
// So generally you don’t need to use the `inline` keyword “at all”.
inline int min(int x, int y) {
    return x > y ? y : x;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
