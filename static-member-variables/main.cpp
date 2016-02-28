#include <iostream>

using namespace std;

int generateId() {
    static int id = 0;

    return id++;
}

/*
Because static member variables are not a part of the class object,
they get initialized when the program starts.
 */
class Something {
private:
    static int idGenerator;
    int id;

public:
    static int value;

    Something() {
        id = idGenerator++;
    }

    int getID() const { return id; }
};

// You can initialize private statics.
int Something::idGenerator = 1;

int Something::value = 1;

int main() {
    cout << "Hello, World!" << endl;

    Something first;
    Something second;

    second.value = 1; // This will change first.value too.

    cout << Something::value << endl;

    return 0;
}
