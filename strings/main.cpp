#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    string myName("Volkan");

    string otherName;

    getline(cin, otherName);

    int choice;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << otherName.length();

    return 0;
}