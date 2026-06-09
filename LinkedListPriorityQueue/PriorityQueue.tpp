#include "PriorityQueue.h"
#include <cassert>

template<typename T>
PriorityQueue<T>::PriorityQueue() {
    // LinkedList constructor handles its own initialization automatically
}

template<typename T>
PriorityQueue<T>::~PriorityQueue() {
    // LinkedList destructor handles freeing its own nodes automatically
}

template<typename T>
void PriorityQueue<T>::push(const T &element) {
    // O(1) insertion at the back of the list
    list.push_back(element);
}

template<typename T>
const T &PriorityQueue<T>::top() {
    assert(!list.empty() && "The Priority Queue is currently empty");

    // O(n) scan to find the maximum element node
    Node<T>* current = list.head;
    T* maxElement = &(current->value);

    while (current != nullptr) {
        if (current->value > *maxElement) {
            maxElement = &(current->value);
        }
        current = current->next;
    }

    return *maxElement;
}

template<typename T>
void PriorityQueue<T>::pop() {
    assert(!list.empty() && "The Priority Queue is currently empty");

    // O(n) scan to find the index of the highest priority element
    Node<T>* current = list.head;
    T maxVal = current->value;
    int maxIndex = 0;
    int currentIndex = 0;

    while (current != nullptr) {
        if (current->value > maxVal) {
            maxVal = current->value;
            maxIndex = currentIndex;
        }
        current = current->next;
        currentIndex++;
    }

    // Remove the element at that tracked position using your list's erase method
    list.erase(maxIndex);
}

template<typename T>
bool PriorityQueue<T>::empty() {
    return list.empty();
}

template<typename T>
int PriorityQueue<T>::length() {
    return list.size();
}