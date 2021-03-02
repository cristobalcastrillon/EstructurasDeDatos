#include <iostream>
#include "nodo.h"
using namespace std;

void pintarArbol(struct nodo* nodo);

int main(){
    struct nodo *raiz = new nodo('H');
    raiz->derecho = new nodo('U');
    raiz->derecho->derecho = new nodo('D');
    raiz->izquierdo = new nodo('O');
    raiz->izquierdo->derecho = new nodo(' ');
    raiz->izquierdo->derecho->derecho = new nodo('M');
    raiz->izquierdo->izquierdo = new nodo('L');
    raiz->izquierdo->izquierdo->derecho = new nodo('A');
    raiz->derecho->izquierdo = new nodo('N');
    raiz->derecho->derecho->derecho = new nodo('O');
    pintarArbol(raiz);
    return 0;
}

void pintarArbol(struct nodo* nodo){
    //Imprime por consola el árbol en preorden.
    if(nodo == NULL){
        return;
    }

    cout << nodo->dato << ' ';

    pintarArbol(nodo->izquierdo);
    pintarArbol(nodo->derecho);
}