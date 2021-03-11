#include "avlNode.hpp"

template <typename T>
struct avlTree{
    avlNode<T> * root;

    avlTree(){//Default constructor
        root = NULL;
    }

    int height(avlNode<T> * tempNode){
        int h = 0;
        if(tempNode != NULL){
            int leftHeight = height(tempNode->leftChild);
            int rightHeight = height(tempNode->rightHeight);
            int maxHeight = std::max(leftHeight, rightHeight);
            h = maxHeight + 1;
        }
        return h;
    }

    int balanceFactor(avlNode<T> * tempNode){
        int leftHeight = height(tempNode->leftChild);
        int rightHeight = height(tempNode->rightChild);
        return (leftHeight - rightHeight);
    }

    avlNode<T> * insert(avlNode<T> * rootTemp, T datoTemp){
        //NO CALCULA EL FACTOR DE BALANCE; NO BALANCEA.
        if(rootTemp == NULL){
            rootTemp = new avlNode<T>(datoTemp);
        }
        else{
            if(datoTemp >= rootTemp->dato){
                rootTemp->rightChild = insert(rootTemp->rightChild, datoTemp);
            }
            if(datoTemp < rootTemp->dato){
                rootTemp->leftChild = insert(rootTemp->leftChild, datoTemp);
            }
        }
        //balancear arbol y calcular nueva raíz
        return rootTemp;
    }
};