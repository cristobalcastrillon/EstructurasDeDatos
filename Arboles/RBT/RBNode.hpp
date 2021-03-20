#ifndef RB_NODE
#define RB_NODE

template <typename T>
struct RBNode{
    T data;
    bool red = false;
    RBNode * leftChild;
    RBNode * rightChild;
    RBNode * parent;

    RBNode(){ //Default constructor
        data = NULL;
        parent = leftChild = rightChild = NULL;
    }

    RBNode(T data){ //Constructor #2
        this->data = data;
        parent = leftChild = rightChild = NULL;
    }

};

#endif /* RB_NODE */