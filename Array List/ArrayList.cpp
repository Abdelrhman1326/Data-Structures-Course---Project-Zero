//
// Created by zico on 3/30/26.
//

#include "ArrayList.h"
#include <iostream>
#include <cassert>
using namespace std;

template<class T>
ArrList<T>::ArrList() {
    size = 5;
    count = 0;
    arr = new T [size];
}

template<class T>
void ArrList<T>::expand() {
    size *= 2;
    T* temp = new T [size];
    for (int i = 0; i < count; i++) {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;

}

template<class T>
int ArrList<T>::length() {
    return count;
}

template<class T>
int ArrList<T>::at(int position) {
    assert(position >= 0 && position < count);
    return arr[position];
}

template<class T>
void ArrList<T>::append(T val) {
    if (count == size)
        expand();
    arr[count] = val;
    count++;
}

template<class T>
void ArrList<T>::insertAt(int position, T value) {
    assert(position >= 0 && position < count);

    if (count == size) {
        expand();
    }
    for (int i = count; i > position; i--)
        arr[i] = arr[i - 1];

    arr[position] = value;
    count++;

}

template<class T>
void ArrList<T>::deleteAt(int position) {
    for (int i = position; i < count - 1; i++)
        arr[i] = arr[i + 1];

    count--;

}

template<class T>
void ArrList<T>::display() {
    for (int i = 0; i < count; i++) {
        cout << arr[i] << '\n';
    }
}

template<class T>
ArrList<T>::~ArrList() {
    delete [] arr;
}