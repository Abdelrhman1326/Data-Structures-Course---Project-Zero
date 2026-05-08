#include <iostream>
#include "Stack.h"

int main() {
    Stack<int> s(2);

    std::cout << "Empty: " << s.empty() << "\n";

    s.push(10);
    s.push(20);
    s.push(30); // forces resize

    std::cout << "Size after pushes: " << s.size() << "\n";
    std::cout << "Top: " << s.top() << "\n";

    s.pop();
    std::cout << "Top after pop: " << s.top() << "\n";

    s.pop();
    s.pop();

    std::cout << "Empty after pops: " << s.empty() << "\n";

    return 0;
}
