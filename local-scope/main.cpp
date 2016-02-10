#include <iostream>

using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = 5;
    int y = 12;

    cout << add(x, y) << endl;

    return 0;
}