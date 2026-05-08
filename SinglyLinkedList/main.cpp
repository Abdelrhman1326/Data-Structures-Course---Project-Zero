#include <iostream>
#include "LinkedList.h"

void printList(LinkedList<int>& list) {
    std::cout << "List (size = " << list.size() << "): ";

    // NOTE: assuming you DON'T have iterators yet
    // so we manually traverse via internal structure (temporary helper approach)
    // If your head is private, you should instead add a print() method.

    // If head is private, skip this or implement a print method inside class
}

int main() {
    LinkedList<int> list;

    std::cout << "=== PUSH BACK TEST ===\n";
    int a = 10, b = 20, c = 30;
    list.push_back(a);
    list.push_back(b);
    list.push_back(c);

    std::cout << "Size after push_back: " << list.size() << "\n";

    std::cout << "\n=== PUSH FRONT TEST ===\n";
    int x = 5;
    list.push_front(x);

    std::cout << "Size after push_front: "
    << list.size() << "\n";

    std::cout << "\n=== INSERT TEST ===\n";
    int mid = 15;
    list.insert(2, mid); // insert in middle

    std::cout << "Size after insert: " << list.size() << "\n";

    std::cout << "\n=== ERASE TEST ===\n";
    list.erase(2); // remove inserted element

    std::cout << "Size after erase: " << list.size() << "\n";

    std::cout << "\n=== REMOVE TEST ===\n";
    int val = 20;
    list.remove(val);

    std::cout << "Size after remove(20): " << list.size() << "\n";

    std::cout << "\n=== POP FRONT TEST ===\n";
    list.pop_front();
    std::cout << "Size after pop_front: " << list.size() << "\n";

    std::cout << "\n=== POP BACK TEST ===\n";
    list.pop_back();
    std::cout << "Size after pop_back: " << list.size() << "\n";

    std::cout << "\n=== FINAL STATE CHECK ===\n";
    std::cout << "Empty? " << (list.empty() ? "YES" : "NO") << "\n";

    std::cout << "\n=== STRESS TEST ===\n";
    for (int i = 0; i < 100; i++) {
        list.push_back(i);
    }

    std::cout << "Size after stress push: " << list.size() << "\n";

    for (int i = 0; i < 50; i++) {
        list.pop_front();
    }

    std::cout << "Size after stress pop_front: " << list.size() << "\n";

    std::cout << "\nAll tests executed.\n";

    return 0;
}