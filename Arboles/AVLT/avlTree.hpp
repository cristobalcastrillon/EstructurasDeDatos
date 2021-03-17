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
            int rightHeight = height(tempNode->rightChild);
            int maxHeight = std::max(leftHeight, rightHeight);
            h = maxHeight+1;
        }
        return h;
    }

    int balanceFactor(avlNode<T> * tempNode){
        int leftHeight = height(tempNode->leftChild);
        int rightHeight = height(tempNode->rightChild);
        return (leftHeight - rightHeight);
    }

    avlNode<T> * insert(avlNode<T> * rootTemp, T datoTemp){
        //NO SE AUTOBALANCEA.
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
            //Calcular el balanceFactor...
            // bF = balanceFactor(rootTemp);
            //Balancear...
            // rootTemp = balance();
        }
        return rootTemp;
    }

    avlNode<T> * balance(avlNode<T> * rootTemp){
        //Evaluar qué rotacion(es) se requiere (zig-zag o simple)
        int balanceFactor = balanceFactor(rootTemp);
        // if(balanceFactor > 1){
        //     if(balanceFactor())
        // }
        // if(balanceFactor < -1){
            
        // }
    }
};