#include <iostream>

using namespace std;

class Accumulator {
private:
    int value;

public:
    Accumulator() {value = 0;}

    friend void reset(Accumulator &accumulator);
};

void reset(Accumulator &accumulator) {
    accumulator.value = 0;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

class Humidity;

class Temperature {
private:
    int temp;
public:
    void setTemperature(int temp) {this->temp = temp;}

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

class Humidity {
private:
    int humidity;

public:
    Humidity(int humidity=0) {this->humidity = humidity;}

    void setHumidity(int humidity) {this->humidity = humidity;}

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

void printWeather(const Temperature &temperature, const Humidity &humidity) {

}

class Storage {
private:
    int nValue;
    int dValue;

public:
    Storage(int nValue, int dValue) {
        this->nValue = nValue;
        this->dValue = dValue;
    }

    friend class Display;

    // This will be a compile time error.
    // friend void Display::displayItem(Storage& storage);
};

class Display {
private:
    bool displayIntFirst;

public:
    Display(bool displayIntFirst) {this->displayIntFirst = displayIntFirst;}

    void displayItem(Storage &storage) {
        cout << storage.nValue;
        cout << storage.dValue;
    }
};
