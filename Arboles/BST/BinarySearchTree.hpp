#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include "../Node.hpp"

template <typename T>
struct BinarySearchTree{
    Node<T> * root;
    
    BinarySearchTree(){
        root = NULL;
    }
    
    BinarySearchTree(T dato){
        root = NULL;
        root = insert(root, dato);
    }

    Node<T> * insert(Node <T> * givenNode, T dato){
        //TODO: Arreglar lo siguiente:
        //Cuando se está "insertando" los nodos, no se está conectando (givenNode->rightChild = ?)...
        if(givenNode == NULL){
            givenNode = new Node<T>(dato);
            //std::cout << givenNode->dato << std::endl;
        }
        else if(dato >= givenNode->dato){
            givenNode = insert(givenNode->rightChild, dato);
        }
        else if(dato < givenNode->dato){
            givenNode = insert(givenNode->leftChild, dato);
        }
        return givenNode;
    }

    void inorder(Node<T> * givenNode){
        //No está funcionando. Sospecho que porque la inserción tampoco está funcionando.
        //TODO: Fix this!
        if(givenNode == NULL){
            return;
        }
        inorder(givenNode->leftChild);
        std::cout << givenNode->dato << '\t';
        inorder(givenNode->rightChild);
    }

    void preorder(Node<T> * givenNode){
        if(givenNode == NULL){
            return;
        }
        std::cout << givenNode->dato << '\t';
        preorder(givenNode->leftChild);
        preorder(givenNode->rightChild);
    }

    void postorder(){

    }
};

#endif /* BINARY_SEARCH_TREE */