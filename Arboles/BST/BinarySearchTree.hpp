#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include "../Node.hpp"

template <typename T>
struct BinarySearchTree{
    Node<T> * root;
    
    BinarySearchTree(T dato){
        root = NULL;
        root = insert(root, dato);
    }

    Node<T> * insert(Node <T> * nodoRaiz, T dato){
        //TODO: fix this!
        if(nodoRaiz == NULL){
            nodoRaiz = new Node<T>(dato);
        }
        else{
            if(dato >= nodoRaiz->dato){
                insert(nodoRaiz->rightChild, dato);
            }
            if(dato < nodoRaiz->dato){
                insert(nodoRaiz->leftChild, dato);
            }
        }
        return nodoRaiz;
    }
};

#endif /* BINARY_SEARCH_TREE */