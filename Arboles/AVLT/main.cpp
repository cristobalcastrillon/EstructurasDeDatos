#include <iostream>

#include "avlTree.hpp"

int main(){
    avlTree<char> nuevoArbol;
    
    nuevoArbol.root = nuevoArbol.insert(nuevoArbol.root, 'A');
    std::cout << nuevoArbol.root->dato << std::endl;

    int altura = nuevoArbol.height(nuevoArbol.root);
    std::cout << altura << std::endl;

    nuevoArbol.insert(nuevoArbol.root, 'B');
    std::cout << nuevoArbol.root->rightChild->dato << std::endl;

    altura = nuevoArbol.height(nuevoArbol.root);
    std::cout << altura << std::endl;

    return 0;
}