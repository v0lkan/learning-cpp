#include <iostream>

using namespace std;

// Return types are not considered for uniqueness when overloading functions.
int add(int, int);
int add(double, double);
int add(int x, int y, int z);

typedef char* string;
void print(string value); //
void print(char *value);  // These two declerations will be considered identical.

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
