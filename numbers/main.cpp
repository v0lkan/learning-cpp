#include <iostream>

using namespace std;

void doPrint() {
    cout << "In doPrint()" << endl;
}

int returnFive() {
    return 5;
}

int main() {
//    using namespace std;

//    using std::cout;
//    using std::cin;
//    using std::endl;

    doPrint();

    cout << "Enter a number" << endl;

    int x = 0;

    cin >> x;

    cout << "You entered: " << x << endl;

    return 0;
}