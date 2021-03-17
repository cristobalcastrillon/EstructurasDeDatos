#include "BinarySearchTree.hpp"

int main(){
    BinarySearchTree<char> bst('A');
    std::cout << bst.root->dato << std::endl;
    Node<char> * nodoTemp = bst.insert(bst.root, 'B');
    nodoTemp = bst.insert(bst.root, 'C');
    bst.inorder(bst.root);
    return 0;
}