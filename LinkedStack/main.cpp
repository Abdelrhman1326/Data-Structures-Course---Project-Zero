#include <iostream>
#include <cassert>
#include "LinkedStack.h"

int main() {
    LinkedStack<int> st;

    assert(st.empty());
    assert(st.size() == 0);

    st.push(10);
    st.push(20);
    st.push(30);

    assert(!st.empty());
    assert(st.size() == 3);
    assert(st.top() == 30);

    st.pop();
    assert(st.size() == 2);
    assert(st.top() == 20);

    st.pop();
    assert(st.size() == 1);
    assert(st.top() == 10);

    st.pop();
    assert(st.empty());
    assert(st.size() == 0);

    st.push(99);
    assert(!st.empty());
    assert(st.top() == 99);
    assert(st.size() == 1);

    for (int i = 0; i < 5000; ++i) {
        st.push(i);
    }

    assert(st.size() == 5001);

    for (int i = 4999; i >= 0; --i) {
        assert(st.top() == i);
        st.pop();
    }

    assert(st.top() == 99);
    st.pop();
    assert(st.empty());

    std::cout << "All LinkedStack tests passed successfully.\n";
    return 0;
}