#include <iostream>
#include "RedBlackTree.hpp"

int main(){
    RedBlackTree<char> rbt;

    rbt.root = rbt.insert(rbt.root, 'C');
    std::cout << rbt.root->data << std::endl;

    std::cout << "Inorder:" << std::endl;
    rbt.inorder(rbt.root);
    std::cout << '\n';    

    // std::cout << (*(rbt.insert(rbt.root, 'B'))).data << std::endl;
    // std::cout << (*(rbt.insert(rbt.root, 'A'))).data << std::endl;
    // std::cout << (*(rbt.insert(rbt.root, 'D'))).data << std::endl;
    // std::cout << (*(rbt.insert(rbt.root, 'E'))).data << std::endl;

    rbt.insert(rbt.root, 'B');
    std::cout << "Inorder:" << std::endl;
    rbt.inorder(rbt.root);
    std::cout << '\n';

    rbt.insert(rbt.root, 'A');
    std::cout << "Inorder:" << std::endl;
    rbt.inorder(rbt.root);
    std::cout << '\n';

    rbt.insert(rbt.root, 'D');
    std::cout << "Inorder:" << std::endl;
    rbt.inorder(rbt.root);
    std::cout << '\n';

    rbt.insert(rbt.root, 'E');
    std::cout << "Inorder:" << std::endl;
    rbt.inorder(rbt.root);
    std::cout << '\n';

    // std::cout << "Inorder:" << std::endl;
    // rbt.inorder(rbt.root);
    // std::cout << '\n';

    std::cout << "Preorder:" << std::endl;
    rbt.preorder(rbt.root);
    std::cout << '\n';
    return 0;
}