#include <iostream>

#include "add.h"
#include "subtract.h"

#define MEANING_OF_LIFE 42
#define PRINT_JOE

using namespace std;

int main() {
    cout << "Hello, World! Life is" << MEANING_OF_LIFE << "!" << endl;

#ifdef PRINT_JOE
    cout << "Hi Joe!" << endl;
#endif

#ifdef PRINT_BOB
    cout << "Hi Joe!" << endl;
#endif

#ifndef PRINT_JULIE
    cout << "Julie is not here!" << endl;
#endif

    return 0;
}