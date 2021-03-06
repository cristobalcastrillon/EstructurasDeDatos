#ifndef AVL_TREE
#define AVL_TREE

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
        nodo = balance(nodo);
        return nodo;
    }

    Node<T> * RDD(Node<T> * root){
        Node<T> * temp;
        temp = root->rightChild;
        root->rightChild = temp->leftChild;
        temp->leftChild = root;
        return temp;
    }

    Node<T> * RII(Node<T> * root)
    {
        Node<T> * temp;
        temp = root->leftChild;
        root->leftChild = temp->rightChild;
        temp->rightChild = root;
        return temp;
    }

    Node<T> * RID(Node<T> * root)
    {
        Node<T> * temp;
        temp = root->leftChild;
        root->leftChild = RDD(temp);
        return RII(root);
    }

    Node<T> * RDI(Node<T> * root)
    {
        Node<T> * temp;
        temp = root->rightChild;
        root->rightChild = RII(temp);
        return RDD(root);
    }

    Node<T> * balance(Node<T> * nodo){
        //Determinar qué rotación(es) se requiere (zig-zag o simple)
        int balFac = balanceFactor(nodo);
        if(balFac > 1){
            //Subárbol izquierdo es más profundo que el derecho
            if(balanceFactor(nodo->leftChild) > 0){
                nodo = RII(nodo);
            }
            else{
                nodo = RID(nodo);
            }
        }
        if(balFac < -1){
            //Subárbol derecho es más profundo que el izquierdo
            if(balanceFactor(nodo->rightChild) > 0){
                nodo = RDI(nodo);
            }
            else{
                //Rotación doble a la derecha:
                nodo = RDD(nodo);
            }
        }
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

#endif /* AVL_TREE */