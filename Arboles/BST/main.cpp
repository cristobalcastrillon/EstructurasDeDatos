#include "BinarySearchTree.hpp"

int main(){
    BinarySearchTree<int> bst;
    bst.root = bst.insert(bst.root, 2);
    bst.insert(bst.root, 1);
    bst.insert(bst.root, 3);
    //TODO: fix 'BST::insert()' que para cuatro nodos se putea
    // bst.insert(bst.root, 'D');
    // bst.insert(bst.root, 'E');
    bst.inorder(bst.root);
    std::cout << '\n';
    bst.preorder(bst.root);
    std::cout << '\n';
    bst.postorder(bst.root);
    return 0;
}