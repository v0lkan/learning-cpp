#include <iostream>
#include <cstdlib>

using namespace std;

void die() {
    exit(1);
}

enum class Color {
    BLACK,
    WHITE,
    YELLOW,
    GREEN,
    BLUE
};

void printColor(Color color) {
    switch (color) {
        case Color::BLACK:
            int z = 12;
            cout << "Black";
            break;
        case Color::WHITE:
            cout << "White";
            break;
        case Color::YELLOW:
            cout << "Yellow";
            break;
        case Color::GREEN:
            cout << "Green";
            break;
        case Color::BLUE:
            cout << "Blue";
            break;
        default:
            cout << "Unknown color!";
    }
}

int main() {
    cout << "Hello, World!" << endl;

    int selection;

    do {
        cout << "Please make a selection.";
        cin >> selection;
    } while (selection > 0);

    int count(0);

    while (count < 10) {
        count++;
    }

    int x;
    cin >> x;

    if ( x > 10 ) {
        cout << x << " is greater than 10.";
    } else {
        cout << x << " is less than 10.";
    }



    return 0;
}