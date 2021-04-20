// #include <string>
struct Node{
    std::string termino;
    std::string significado;
    struct Node * leftChild;
    struct Node * rightChild;

    Node(std::string terminoTemp, std::string significadoTemp){ //Constructor
        termino = terminoTemp;
        significado = significadoTemp;
        leftChild = rightChild = NULL;
    }
};