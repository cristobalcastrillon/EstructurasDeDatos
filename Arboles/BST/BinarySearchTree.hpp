#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include "../Node.hpp"

template <typename T>
struct BinarySearchTree{
    Node<T> * root;
    
    BinarySearchTree(T dato){
        root = new Node<T>(dato);
    }

    Node<T> * insert(Node <T>* nodoAct, T dato){
        if(nodoAct != NULL){
            if(dato >= nodoAct.dato){
            }
            if(dato < nodoAct.dato){
            }
        }
    }
};

#endif /* BINARY_SEARCH_TREE */