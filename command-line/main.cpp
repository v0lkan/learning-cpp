#include <iostream>
#include <sstream>

using namespace std;

double findAverage(int count, ...) {
    double sum = 0;

    va_list list;

    va_start(list, count);

    for(int arg=0; arg < count; arg++) {
        sum += va_arg(list, int);
    }

    va_end(list); // Cleanup.

    return sum / count;
}

int main(int argc, char *argv[]) {
    cout << "Hello, World!" << endl;

    for (int count = 0; count < argc; count++) {
        cout << argv[count] << endl;
    }

    stringstream convert(argv[1]);

    int myInt;
    auto result = (convert >> myInt);

    if (!result) {
        myInt = 0;
    }

    return 0;
}
