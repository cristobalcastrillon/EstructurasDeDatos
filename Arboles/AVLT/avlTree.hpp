#include "../Node.hpp"

template <typename T>
struct AVLTree{
    Node<T> * root;

    AVLTree(){//Default constructor
        root = NULL;
    }

    AVLTree(T dato){
        root = NULL;
        root = insert(root, dato);
    }

    int height(Node<T> * nodo){
        //Retorna la _cantidad de niveles_ del árbol.
        int h = 0;
        if(nodo != NULL){
            int leftHeight = height(nodo->leftChild);
            int rightHeight = height(nodo->rightChild);
            int maxHeight = std::max(leftHeight, rightHeight);
            h = maxHeight + 1;
        }
        return h;
    }

    int balanceFactor(Node<T> * nodo){
        int leftHeight = height(nodo->leftChild);
        int rightHeight = height(nodo->rightChild);
        return (leftHeight - rightHeight);
    }

    Node<T> * insert(Node<T> * nodo, T dato){
        if(nodo != NULL){
            if(dato >= nodo->dato){
                nodo->rightChild = insert(nodo->rightChild, dato);
            }
            if(dato < nodo->dato){
                nodo->leftChild = insert(nodo->leftChild, dato);
            }
        }
        nodo = new Node<T>(dato);
        //TODO: Develop balance()
        //nodo = balance(nodo);
        return nodo;
    }

    Node<T> * balance(Node<T> * nodo){
        //Determinar qué rotación(es) se requiere (zig-zag o simple)
        int balanceFactor = balanceFactor(nodo);
        if(balanceFactor > 1){
            //Subárbol izquierdo es más profundo que el derecho
            if(balanceFactor(nodo->leftChild) > 0){
                
            }
            else{

            }
        }
        if(balanceFactor < -1){
            //Subárbol derecho es más profundo que el izquierdo
            if(balanceFactor(nodo->rightChild) > 0){

            }
            else{
                
            }
        }
        return;
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