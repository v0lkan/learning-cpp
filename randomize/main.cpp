#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int getRandomNumber(int min, int max) {
    static const double FRACTION = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return static_cast<int>(rand() * FRACTION * (max - min + 1) + min);
}

void betterRandom() {
    random_device rd;
    mt19937 mersenne(rd());

    for (int count = 0; count < 48; count++) {
        cout << mersenne() << "\t";

        if ((count + 1) % 4 == 0) {
            cout << "\n";
        }
    }
}

int main() {
    cout << "Hello, World!" << endl;

    // Note that srand interface is obsoleted by arc4random.
    srand(static_cast<unsigned int>(time(0)));

    for (int count = 0; count < 100; count++) {
        cout << rand() << "\t";

        if ((count + 1) % 5 == 0) {
            cout << "\n";
        }
    }

    return 0;
}
