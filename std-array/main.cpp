#include <iostream>
#include <array>
#include <vector>

using namespace std;

void vectors() {
    vector<int> array = {1, 2, 3, 4};

    array.resize(10);

    // When you need a dynamic array, use vector unless you want pain and suffering.
}

int main() {
    cout << "Hello, World!" << endl;

    // std::array gives fixed array functionality that won’t decay
    // when passed into a function.

    array<int, 3> array3;

    array<int, 2> {1, 2};

    array<int, 3> array4 = {1, 2, 3};

    cout << array4[0];
    cout << array4.at(0);
    cout << array4.size();

    sort(array4.begin(), array4.end());

    return 0;
}
