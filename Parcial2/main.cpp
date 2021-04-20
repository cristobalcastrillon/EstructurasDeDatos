#include <iostream>
#include <fstream>
#include "avlTree.hpp"

int main(){
    AVLTree avl;

    std::string linea;
    std::string termino;
    std::string significado;
    std::ifstream diccionario("diccionario.txt");
    if(diccionario.is_open()){
        while(getline(diccionario, linea)){
            std::getline(diccionario, termino, '\t');
            std::getline(diccionario, significado, '\n');

            Node * nodoTemp = new Node(termino, significado);
            avl.insert(nodoTemp, nodoTemp->termino);
        }
    }

    return 0;
}