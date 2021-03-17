#include "BinarySearchTree.hpp"

int main(){
    BinarySearchTree<int> bst;
    bst.root = bst.insert(bst.root, 2);
    bst.insert(bst.root, 1);
    bst.insert(bst.root, 3);
    bst.inorder(bst.root);
    std::cout << '\n';
    bst.preorder(bst.root);
    std::cout << '\n';
    return 0;
}