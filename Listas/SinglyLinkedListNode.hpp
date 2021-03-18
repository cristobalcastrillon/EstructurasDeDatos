template <typename T>
struct SinglyLinkedListNode{
    T data;
    SinglyLinkedListNode * next;

    SinglyLinkedListNode(){
        data = NULL;
        next = NULL;
    }

    SinglyLinkedListNode(T data){
        this->data = data;
        next = NULL;
    }

    void printLinkedList(SinglyLinkedListNode* head) {
        while(head != NULL){
            std::cout << head->data << std::endl;
            head = head->next;
        }
    }

    SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
        
    }
};