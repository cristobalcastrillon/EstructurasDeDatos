template <typename T>
struct avlNode{
    T dato;
    struct avlNode * leftChild = NULL;
    struct avlNode * rightChild = NULL;

    avlNode(T datoTemp){ //Constructor
        dato = datoTemp;
    }
};