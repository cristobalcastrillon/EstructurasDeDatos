template <typename T>
struct Node{
    T dato;
    struct Node * leftChild;
    struct Node * rightChild;

    Node(T datoTemp){ //Constructor
        dato = datoTemp;
        leftChild = NULL;
        rightChild = NULL;
    }
};