class Storage;

class Display {
private:
    bool displayIntFirst;

public:
    Display(bool displayIntFirst) {this->displayIntFirst = displayIntFirst;}

    void displayItem(Storage &storage);
};

class Storage {
private:
    int nValue;
    int dValue;

public:
    Storage(int nValue, int dValue) {
        this->nValue = nValue;
        this->dValue = dValue;
    }

    friend void Display::displayItem(Storage &storage);
};

void Display::displayItem(Storage &storage) {
    cout << storage.nValue;
    cout << storage.dValue;
}
