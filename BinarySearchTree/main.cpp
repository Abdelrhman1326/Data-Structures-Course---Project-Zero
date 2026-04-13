#include <algorithm>
#include <iostream>
#include <vector>
#include "BinaryTree.cpp"
#include "BinaryTree.h"
#include "Node.h"

using namespace std;

int main () {
    vector<int> input = {7, 8, 3, 4, 10, 13, 14, 1, 6};

    BinaryTree<int> *ExampleBinaryTree = new BinaryTree<int>();

    for (auto value : input) {
        ExampleBinaryTree->insert(value);
    }

    ExampleBinaryTree->in_order_transverse();
    cout << endl;

    ExampleBinaryTree->remove(13);

    ExampleBinaryTree->in_order_transverse();

    ExampleBinaryTree->remove(7);

    cout << endl;
    ExampleBinaryTree->in_order_transverse();

    return 0;
}