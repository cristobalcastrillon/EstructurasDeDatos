template <typename T>
struct SinglyLinkedListNode{
    T data;
    SinglyLinkedListNode * next;

    SinglyLinkedListNode(){
        data = NULL;
        next = nullptr;
    }

    SinglyLinkedListNode(T data){
        this->data = data;
        next = nullptr;
    }

    void printLinkedList(SinglyLinkedListNode* head) {
        while(head != nullptr){
            std::cout << head->data << std::endl;
            head = head->next;
        }
    }

    SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data){
        //TODO: POST THE ISSUE IN STACKOVERFLOW!
    }
};