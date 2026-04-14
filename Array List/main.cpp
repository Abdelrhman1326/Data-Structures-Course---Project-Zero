#include <iostream>
#include "ArrayList.cpp"

int main() {
    ArrList<int> list;
    list.append(5);
    list.append(2);
    list.append(20);
    list.insertAt(1, 65);


    cout << "list of index 1: " << list.at(1) << endl;
    list.deleteAt(0);
    cout << "List items: \n";
    list.display();
}