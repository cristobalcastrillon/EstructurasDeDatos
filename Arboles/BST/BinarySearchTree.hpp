#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include "../Node.hpp"

template <typename T>
struct BinarySearchTree{
    Node<T> * root;
    
    BinarySearchTree(T dato){
        root = NULL;
        root = insert(root, dato);
    }

    Node<T> * insert(Node <T> * raiz, T dato){
        if(raiz == NULL){
            raiz = new Node<T>(dato);
        }
        else if(dato >= raiz->dato){
            raiz = insert(raiz->rightChild, dato);
            //std::cout << raiz->dato << std::endl;
        }
        else if(dato < raiz->dato){
            raiz = insert(raiz->leftChild, dato);
            //std::cout << raiz->dato << std::endl;
        }
        return raiz;
    }

    void inorder(Node<T> * raiz){
        //No está funcionando. Sospecho que porque la inserción tampoco está funcionando.
        //TODO: Fix this!
        if(raiz == NULL)
            return;
        inorder(raiz->leftChild);
        std::cout << raiz->dato << std::endl;
        inorder(raiz->rightChild);
    }
};

#endif /* BINARY_SEARCH_TREE */