#include <iostream>
#include <vector>

using namespace std;

typedef double distance_t;
typedef int testScore_t;

typedef vector<pair<string, int>> pairList_t;

struct Employee {
    short id;
    int age;
    double wage;
};

struct Triangle {
    double length = 1.0;
    double width = 1.0;
};

bool hasDuplicates(pairList_t) {
    return true;
}

testScore_t gradeTest() {
    return NULL;
}

struct Company {
    Employee CEO;
    int numberOfEmployees;
};

auto add(int x, int y) {
    return x + y;
}

auto baz(int foo) -> int;

int main() {
    double d = 12;
    distance_t t = 12;

    auto z = 5.22;
    auto i = 11;

    Employee joe {1, 22, 122};
    Triangle tri {3, 3};

    cout << "Hello, World!" << endl;
    return 0;
}