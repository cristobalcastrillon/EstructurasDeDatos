#include <iostream>
#include "BinarySearchTree.hpp"

int main(){
    BinarySearchTree<char> bst('A');
    std::cout << bst.root->dato << std::endl;
    return 0;
}