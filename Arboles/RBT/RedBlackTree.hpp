#ifndef RED_BLACK_TREE
#define RED_BLACK_TREE

#include "RBNode.hpp"

template <typename T>
struct RedBlackTree{
    RBNode<T> * root;

    RedBlackTree(){
        root = NULL;
    }

    RBNode<T> * insert(RBNode<T> * nodo, T data){
        if(nodo != NULL){
            if(data >= nodo->data){
                nodo->rightChild = insert(nodo->rightChild, data);
            }
            if(data < nodo->data){
                nodo->leftChild = insert(nodo->leftChild, data);
            }
        }
        nodo = new RBNode<T>(data);
        return nodo;
    }
};
#endif /* RED_BLACK_TREE */