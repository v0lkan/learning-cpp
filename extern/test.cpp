#include <iostream>
#include "externs.h"
using namespace std;

extern int i;// defined elsewehere

void test()
{
    cout << "Hi" << i << endl;
    cout << "Hi" << k << endl;
}
