#include <iostream>

using namespace std;

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
