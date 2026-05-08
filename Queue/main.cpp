#include <iostream>
#include "Queue.h"
#include "Queue.tpp"

int main() {
    Queue<int> q(3);

    std::cout << "Empty initially: " << q.empty() << "\n";

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Full after 3 inserts: " << q.full() << "\n";

    std::cout << "Front: " << q.front() << "\n";
    std::cout << "Back: " << q.back() << "\n";
    std::cout << "Size: " << q.size() << "\n";

    q.dequeue();
    std::cout << "Front after 1 dequeue: " << q.front() << "\n";

    q.enqueue(40); // tests circular wrap-around

    std::cout << "Back after wrap: " << q.back() << "\n";
    std::cout << "Size after wrap: " << q.size() << "\n";

    q.dequeue();
    q.dequeue();
    q.dequeue();

    std::cout << "Empty after all dequeues: " << q.empty() << "\n";

    return 0;
}
