#include <iostream>
#include <vector>

using namespace std;

/*
Memory:
    Text Segment: Where the compile program sits.
    BSS Segment: Where zero-initialized global and static variables stay.
    Data Segment:  Where initialized global and static variables stay.
    Heap: Dynamically allocated stuff stay at the heap.
    Call Stack / Stack: Where function parameters, local variables,
    and other function-related information is stored.

    Allocating memory in the heap is “comparatively” slow.
    Also dereferencing pointers are slower than accessing the variables directly.
 */

void vectorsAsStack() {
    vector<int> stack;

    stack.reserve(2);

    stack.push_back(5);
    stack.push_back(3);
    stack.push_back(2);
    stack.pop_back();
    stack.pop_back();
    stack.pop_back();
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
