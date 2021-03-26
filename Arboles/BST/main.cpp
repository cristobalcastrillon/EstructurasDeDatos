#include "BinarySearchTree.hpp"

int main(){
    BinarySearchTree<int> bst(3);
    bst.inorder(bst.root);
    std::cout << '\n';

    bst.insert(bst.root, 1);
    bst.inorder(bst.root);
    std::cout << '\n';

    bst.insert(bst.root->leftChild, 2);
    bst.inorder(bst.root);
    std::cout << '\n';

    // //TODO: fix 'BST::insert()' que para más de dos niveles en el árbol se putea
    bst.insert(bst.root, 4);
    bst.inorder(bst.root);
    std::cout << '\n';

    bst.insert(bst.root->rightChild, 5);
    bst.inorder(bst.root);
    std::cout << '\n';

    bst.preorder(bst.root);
    std::cout << '\n';
    bst.postorder(bst.root);
    return 0;
}