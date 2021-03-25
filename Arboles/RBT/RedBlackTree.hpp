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
                nodo->rightChild->parent = nodo;
            }
            if(data < nodo->data){
                nodo->leftChild = insert(nodo->leftChild, data);
                nodo->leftChild->parent = nodo;
            }
        }
        nodo = new RBNode<T>(data);
        return nodo;
    }

    void inorder(RBNode<T> * nodo){
        if(nodo == NULL)
            return;
        inorder(nodo->leftChild);
        std::cout << nodo->data << '\t';
        inorder(nodo->rightChild);
    }

    void preorder(RBNode<T> * nodo){
        if(nodo == NULL)
            return;
        std::cout << nodo->data << '\t';
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
    }

    void postorder(RBNode<T> * nodo){
        if(nodo == NULL)
            return;
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
        std::cout << nodo->data << '\t';
    }
};
#endif /* RED_BLACK_TREE */