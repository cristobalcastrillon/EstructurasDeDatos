#ifndef AVL_TREE
#define AVL_TREE

#include "Node.hpp"

struct AVLTree{
    Node * root;

    AVLTree(){//Default constructor
        root = NULL;
    }

    AVLTree(std::string dato){
        root = NULL;
        root = insert(root, dato);
    }

    int height(Node * nodo){
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

    int balanceFactor(Node * nodo){
        int leftHeight = height(nodo->leftChild);
        int rightHeight = height(nodo->rightChild);
        return (leftHeight - rightHeight);
    }

    Node * insert(Node * nodo, std::string dato){
        if(nodo){
            if(dato >= nodo->termino){
                nodo->rightChild = insert(nodo->rightChild, dato);
            }
            if(dato < nodo->termino){
                nodo->leftChild = insert(nodo->leftChild, dato);
            }
        }
        if(!nodo)
            //El significado del término es NULL...
            nodo = new Node(dato, "NULL");
        nodo = balance(nodo);
        return nodo;
    }

    Node * RDD(Node * root){
        Node * temp;
        temp = root->rightChild;
        root->rightChild = temp->leftChild;
        temp->leftChild = root;
        return temp;
    }

    Node * RII(Node * root)
    {
        Node * temp;
        temp = root->leftChild;
        root->leftChild = temp->rightChild;
        temp->rightChild = root;
        return temp;
    }

    Node * RID(Node * root)
    {
        Node * temp;
        temp = root->leftChild;
        root->leftChild = RDD(temp);
        return RII(root);
    }

    Node * RDI(Node * root)
    {
        Node * temp;
        temp = root->rightChild;
        root->rightChild = RII(temp);
        return RDD(root);
    }

    Node * balance(Node * nodo){
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

    void inorder(Node * nodo){
        if(nodo == NULL)
            return;
        inorder(nodo->leftChild);
        std::cout << nodo->termino << '\t';
        inorder(nodo->rightChild);
    }

    void preorder(Node * nodo){
        if(nodo == NULL)
            return;
        std::cout << nodo->termino << '\t';
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
    }

    void postorder(Node * nodo){
        if(nodo == NULL)
            return;
        preorder(nodo->leftChild);
        preorder(nodo->rightChild);
        std::cout << nodo->termino << '\t';
    }
};

#endif /* AVL_TREE */