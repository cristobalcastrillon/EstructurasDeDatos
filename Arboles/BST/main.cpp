#include <iostream>
#include "BinarySearchTree.hpp"

int main(){
    BinarySearchTree<char> bst('A');
    std::cout << bst.root->dato << std::endl;
    Node<char> * nodoTemp = bst.insert(bst.root, 'B');
    std::cout << nodoTemp->dato << std::endl;
    return 0;
}