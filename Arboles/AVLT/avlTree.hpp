#include "../Node.hpp"

template <typename T>
struct avlTree{
    Node<T> * root;

    avlTree(){//Default constructor
        root = NULL;
    }

    int height(Node<T> * tempNode){
        int h = 0;
        if(tempNode != NULL){
            int leftHeight = height(tempNode->leftChild);
            int rightHeight = height(tempNode->rightChild);
            int maxHeight = std::max(leftHeight, rightHeight);
            h = maxHeight+1;
        }
        return h;
    }

    int balanceFactor(Node<T> * tempNode){
        int leftHeight = height(tempNode->leftChild);
        int rightHeight = height(tempNode->rightChild);
        return (leftHeight - rightHeight);
    }

    Node<T> * insert(Node<T> * rootTemp, T datoTemp){
        //NO SE AUTOBALANCEA.
        if(rootTemp == NULL){
            rootTemp = new Node<T>(datoTemp);
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

    Node<T> * balance(Node<T> * rootTemp){
        //Evaluar qué rotacion(es) se requiere (zig-zag o simple)
        int balanceFactor = balanceFactor(rootTemp);
        // if(balanceFactor > 1){
        //     if(balanceFactor())
        // }
        // if(balanceFactor < -1){
            
        // }
    }
};