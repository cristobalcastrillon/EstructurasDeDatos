#include <iostream>

#include "AVLTree.hpp"

int main(){
    AVLTree<int> avl;

    //Probando inserciones al árbol...
    avl.root = avl.insert(avl.root, 2);
    std::cout << avl.height(avl.root) << std::endl;

    avl.insert(avl.root, 1);
    std::cout << avl.height(avl.root) << std::endl;

    avl.insert(avl.root, 3);
    std::cout << avl.height(avl.root) << std::endl;

    //Probando los recorridos al árbol...
    avl.inorder(avl.root);
    std::cout << '\n';
    avl.preorder(avl.root);
    std::cout << '\n';
    avl.postorder(avl.root);
    return 0;
}