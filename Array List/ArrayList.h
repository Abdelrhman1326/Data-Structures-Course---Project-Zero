//
// Created by zico on 3/30/26.
//

#ifndef DATA_STRUCTURES_ARRAYLIST_H
#define DATA_STRUCTURES_ARRAYLIST_H


template <class T>
class ArrList {
public:
    ArrList();
    ~ArrList();
    int length();
    int at(int pos);
    void insertAt(int pos, T val);
    void deleteAt(int pos);
    void append(T val);
    void display();
    void expand();
private:
    int size;
    int count;
    T* arr;

};


#endif //DATA_STRUCTURES_ARRAYLIST_H