#include <iostream>

#include "avlTree.hpp"

int main(){
    avlTree<char> nuevoArbol;
    
    nuevoArbol.root = nuevoArbol.insert(nuevoArbol.root, 'A');
    std::cout << nuevoArbol.root->dato << std::endl;
    
    nuevoArbol.root = nuevoArbol.insert(nuevoArbol.root, 'B');
    std::cout << nuevoArbol.root->dato << std::endl;
    return 0;
}