#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

void passArray(int prime[5]) {
    prime[0] = 11;
};

void doNotTouch(const int prime[5]) {
    // changing `prime` here is a compile-time error!
}

void test(int array[]) {
    cout << sizeof(array) << endl; // Will print the size of the pointer, not the array!
}

int main() {
    cout << "Hello, World!" << endl;

    int primes[5];
    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    primes[4] = 11;

    cout << sizeof(primes); // Will print size of the array.

    int numbers[3] = {1, 2, 3};
    int allInitializedToZero[20] = {};

    int compilerCanDeduceTheSizeForMe[] = {1, 2, 3, 4, 5};

    Rectangle rectangles[5];

    const int STUDENTS = 5;
    int scores[STUDENTS] = {42, 22, 16, 81, 99};
    int totalScore = 0;

    for (int student = 0; student < STUDENTS; student++) {
        totalScore += scores[student];
    }

    double averageScore = static_cast<double>(totalScore) / STUDENTS;

    int stuffOfStuffs[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

//    for (auto row: stuffOfStuffs) {
//        for (auto item: row) {
//            cout << item;
//        }
//    }

    int oStuffOfStuffs[][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };

    char myString[] = "bello!"; // C-style String.

    char name[255];
    cin.getline(name, 255);

    char source[] = "copy this.";
    char dest[50];

    strcpy(dest, source);
    strncpy(dest, source, 10);

    cout << strlen(source);

    // strcat
    // strncat
    // strcmp
    // strncmp

    // Use std:string instead of C-style strings
    // unless you have a very compelling reason to do otherwise.

    return 0;
}
