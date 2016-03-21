#ifndef CONTAINER_CLASSES_INTARRAY_H
#define CONTAINER_CLASSES_INTARRAY_H

#include <assert.h>

class IntArray {
private:
    int length;
    int *data;

public:
    IntArray() {
        length = 0;
        data = 0;
    }

    IntArray(int length) {
        data = new int[length];
        this->length = length;
    }

    ~IntArray() {
        erase();
    }

    void erase() {
        delete[] data;
        data = 0;
        length = 0;
    }

//    int a = b is setting a’s VALUE to b's VALUE
//    int* a = &b is setting a’s VALUE to the ADDRESS of b
//    int& a = b is setting a’s ADDRESS to b's ADDRESS (a is a reference to b)

    int& operator[](int index) {
        assert(index >= 0 && index < length);

        return data[index];
    }

    int getLength() {return length;}

    void reallocate(int newLength) {
        erase();

        if (newLength <= 0) {return;}

        data = new int[newLength];
        length = newLength;
    }

    void resize(int newLength) {
        if (newLength <= 0) {
            erase();
        }

        int *tempData = new int[length];

        int elementsToCopy = (newLength > length) ? length : newLength;

        for (int index = 0; index < elementsToCopy; index++) {
            tempData[index] = data[index];
        }

        delete[] data;

        data = tempData;
        length = newLength;
    }

    void insertBefore(int value, int index) {

    }

    void remove(int index) {
        assert(index >= 0 && index < length);

        int *tempData = new int[length-1];

        for (int before = 0; before < index; before++) {
            tempData[before] = data[before];
        }

        delete[] data;
        data = tempData;
        length -= 1;
    }

    void insertAtBeginning(int value) {
        insertBefore(value, 0);
    }

    void insertAtEnd(int value) {
        insertBefore(value, length);
    }
};

#endif
