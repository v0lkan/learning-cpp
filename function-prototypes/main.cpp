#include <iostream>

using namespace std;

// int add(int x, int y);
int add(int, int);

int main() {
    cout << add(3, 5) << endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}