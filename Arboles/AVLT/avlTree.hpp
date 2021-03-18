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
        //Retorna la altura del árbol (cantidad máx. de vértices a izq. o der. desde el nodo raíz hasta sus hojas).
        int h = -1;
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
                //Rotación simple a la derecha
                // nodo: nodo padre
                //rot_sim_derecha();
            }
            else{
                //Rotación doble a la derecha:
                //Primero a la izq., después a la der.
            }
        }
        if(balanceFactor < -1){
            //Subárbol derecho es más profundo que el izquierdo
            if(balanceFactor(nodo->rightChild) > 0){
                //Rotación simple a la izquierda
            }
            else{
                //Rotación doble a la derecha:
                //Primero a la der., después a la izq.
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