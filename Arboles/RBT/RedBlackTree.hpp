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

    void inorder(RBNode<T> * nodo){
        if(nodo == NULL)
            return;
        inorder(nodo->leftChild);
        std::cout << nodo->dato << '\t';
        inorder(nodo->rightChild);
    }

    void preorder(RBNode<T> * nodo){
        if(nodo == NULL)
            return;
        std::cout << nodo->dato << '\t';
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
    }

    void postorder(RBNode<T> * nodo){
        if(nodo == NULL)
            return;
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
        std::cout << nodo->dato << '\t';
    }
};
#endif /* RED_BLACK_TREE */