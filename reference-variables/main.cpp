#include <iostream>
#include <vector>

using namespace std;

void voidPointers() {
    struct Stuff {
        int age;
        float length;
    };

    Stuff stuff;

    void *ptr;

    ptr = &stuff;

    // After a static cast, you can properly dereference it:
    Stuff *stuffPtr = static_cast<Stuff*>(ptr);

    cout << (*stuffPtr).age;

    // Generally it’s a good idea to avoid using void pointers
    // unless absolutely necessary.
}

struct Bundle {
    int videoId;
    string description;
};

void memberSelection() {
    Bundle bundle;
    bundle.videoId = 1;
    bundle.description = "Lorem dolorem";

    Bundle &ref = bundle;

    cout << ref.videoId;

    Bundle *ptr = &bundle;

    cout << (*ptr).videoId;

    cout << ptr->videoId;
}

void changeStuff(int &ref) {
    ref = 6;
}

void playWithConstRef(const int &ref) {
    // Cannot change ref.
}

void referencesAreKindaSortaLikeConstPointers() {
    int value = 5;
    int *const ptr = &value;
    int &ref = value;

    cout << ref;
    cout << *ptr;
}

void arrayLoop(int array[]) {
    // for (const auto &number : array ) // compile-time error because array size is unknown.
}

void forEachLoop() {
    int fibonacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};

    for (int number : fibonacci) {
        cout << number << " ";
    }

    for (auto number : fibonacci) {
        cout << number << " ";
    }

    // Uses references instead of copying by value; more efficient.
    for (const auto &number : fibonacci) {
        cout << number << " ";
    }

    vector<int> victor = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};

    for (const auto &number : victor) {
        cout << number << " ";
    }
}

int main() {
    cout << "Hello, World!" << endl;

    int value = 5;
    int &ref = value;

    ref = 7; // value is now 7!

    const int x = 42;
    const int &refx = x; // References MUST hold a value;
                         // There’s no such thing as a “null reference”.

    int value1 = 5;
    int value2 = 6;
    int &ref1 = value1;
    ref1 = value2; // Just assigns the value of value2; ref still points to value1.
                   // References are inherently constant.

    const int &foo = value1; // treats value1 as constant.

    const int &ref3 = 42; // Syntactically correct, and useless.

    return 0;
}
