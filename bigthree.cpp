#include "bigthree.hpp"

BigThree::BigThree() {
    size = 0;
    arr = nullptr;
}

BigThree::BigThree(int size) {
    this->size = size;
    arr = new int[size];
}

BigThree::BigThree(const BigThree& other) {
    size = other.size;
    arr = new int[size];
    for (int i = 0; i < size; ++i) 
        arr[i] = other.arr[i];
}

BigThree & BigThree::operator=(const BigThree& other) {
    size = other.size;
    // must release memory of the old dynamic data first!
    delete[] arr;
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }
    return *this // IMPORTANT! returns the current object by reference
}

BigThree::~BigThree() {
    delete[] arr;
}