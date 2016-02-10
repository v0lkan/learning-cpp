#include <iostream>

using namespace std;

int getValueFromUser() {
    cout << "Enter an integer: ";
    int a;
    cin >> a;
    return a;
}

void printValue(int x) {
    cout << x << endl;
}

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = getValueFromUser();
    int y = getValueFromUser();
    cout << x << " + " << y << " = " << (x+y) << endl;
    return 0;
}