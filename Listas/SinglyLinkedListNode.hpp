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
            std::cout << head->data << '\t';
            head = head->next;
        }
    }

    SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, T data){
        SinglyLinkedListNode<T> * it = head;
        while(it->next)
            it = it->next;
        it->next = new SinglyLinkedListNode<T>(data);
        return head;
    }
};