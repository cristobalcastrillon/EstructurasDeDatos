struct nodo{
    char dato;
    struct nodo * izquierdo;
    struct nodo * derecho;
    nodo(char d){//Constructor
        dato = d;
        izquierdo = derecho = NULL;
    }
};