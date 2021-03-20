#include <iostream>
#include "RedBlackTree.hpp"

int main(){
    RedBlackTree<char> rbt;

    rbt.root = rbt.insert(rbt.root, 'A');
    std::cout << rbt.root->data << std::endl;

    return 0;
}