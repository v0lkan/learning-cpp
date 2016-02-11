#include <iostream>
#include "externs.h"
using namespace std;

void test();

int k = 24;
int i = 42;

void incrementAndPrint() {
    static int value = 1;

    cout << value++ << endl;
};

int main()
{
    test();
}