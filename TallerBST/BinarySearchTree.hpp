#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include "Node.hpp"

template <typename T>
struct BinarySearchTree{
    Node<T> * root;
    
    BinarySearchTree(){
        root = NULL;
    }
    
    BinarySearchTree(T dato){
        root = new Node<T>(dato);
    }

    Node<T> * insert(Node<T> * nodo, T dato){
        if(nodo){
            if(dato >= nodo->dato){
                nodo->rightChild = insert(nodo->rightChild, dato);
            }
            if(dato < nodo->dato){
                nodo->leftChild = insert(nodo->leftChild, dato);
            }
        }
        if(!nodo)
            nodo = new Node<T>(dato);
        return nodo;
    }

    void inorder(Node<T> * nodo){
        if(nodo == NULL)
            return;
        inorder(nodo->leftChild);
        std::cout << nodo->dato << '\t';
        inorder(nodo->rightChild);
    }

    void preorder(Node<T> * nodo){
        if(nodo == NULL)
            return;
        std::cout << nodo->dato << '\t';
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
    }

    void postorder(Node<T> * nodo){
        if(nodo == NULL)
            return;
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
        std::cout << nodo->dato << '\t';
    }
};

#endif /* BINARY_SEARCH_TREE */