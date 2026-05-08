#include <iostream>
#include <cassert>
#include "LinkedStack.h"

int main() {
    LinkedStack<int> stack;

    assert(stack.empty());
    assert(stack.size() == 0);

    stack.push(10);
    assert(!stack.empty());
    assert(stack.size() == 1);
    assert(stack.top() == 10);

    stack.push(20);
    assert(stack.size() == 2);
    assert(stack.top() == 20);

    stack.push(30);
    assert(stack.size() == 3);
    assert(stack.top() == 30);

    stack.pop();
    assert(stack.size() == 2);
    assert(stack.top() == 20);

    stack.pop();
    assert(stack.size() == 1);
    assert(stack.top() == 10);

    stack.pop();
    assert(stack.empty());
    assert(stack.size() == 0);

    std::cout << "All LinkedStack tests passed!" << std::endl;

    return 0;
}
