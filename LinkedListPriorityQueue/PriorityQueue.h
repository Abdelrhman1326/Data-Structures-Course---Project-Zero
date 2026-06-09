#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "SinglyLinkedList/LinkedList.h"

template <typename T>
class PriorityQueue {
private:
    LinkedList<T> list;

public:
    PriorityQueue();
    ~PriorityQueue();

    // Prevent shallow copies
    PriorityQueue(const PriorityQueue& other) = delete;
    PriorityQueue& operator=(const PriorityQueue& other) = delete;

    void push(const T& element);
    void pop();
    const T& top();
    bool empty();
    int length();
};

#include "PriorityQueue.tpp"
#endif //PRIORITYQUEUE_H