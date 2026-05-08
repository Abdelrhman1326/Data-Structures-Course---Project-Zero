#include <iostream>
#include <string>
#include "LinkedList.h"

template <typename T>
void displayListInfo(const std::string& testName, const LinkedList<T>& list) {
    std::cout << "--- " << testName << " ---\n";
    std::cout << "Forward:  ";
    list.printForward();
    std::cout << "Backward: ";
    list.printBackward();
    std::cout << "Size: " << list.size() << "\n";
    std::cout << "Empty: " << (list.empty() ? "Yes" : "No") << "\n\n";
}

int main() {
    LinkedList<int> list;

    // Test 1: Push Back
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    displayListInfo("Push Back: 10, 20, 30", list);

    // Test 2: Push Front
    list.push_front(5);
    list.push_front(1);
    displayListInfo("Push Front: 1, 5", list);

    // Test 3: Insert
    list.insert(0, 0);      // Head
    list.insert(6, 40);     // Tail
    list.insert(3, 15);     // Middle
    displayListInfo("Insert: 0 at index 0, 40 at index 6, 15 at index 3", list);

    // Test 4: Erase
    list.erase(0);          // Head
    list.erase(6);          // Tail
    list.erase(2);          // Middle (15)
    displayListInfo("Erase: index 0, index 6, index 2", list);

    // Test 5: Remove by Value
    list.remove(20);
    displayListInfo("Remove: value 20", list);

    // Test 6: Pop Front/Back
    list.pop_front();
    list.pop_back();
    displayListInfo("Pop Front and Pop Back", list);

    // Test 7: Clear the list (simulated by pops)
    while (!list.empty()) {
        list.pop_back();
    }
    displayListInfo("Emptying the list", list);

    // Test 8: Template Check with std::string
    LinkedList<std::string> strList;
    strList.push_back("Hello");
    strList.push_back("Doubly");
    strList.push_back("World");
    displayListInfo("String List: Hello, Doubly, World", strList);

    return 0;
}
