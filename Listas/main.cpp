#include <iostream>
#include "SinglyLinkedListNode.hpp"

int main(){
    SinglyLinkedListNode<char> * head = new SinglyLinkedListNode<char>('A');
    //head = head->insertNodeAtTail(head, 'B');
    //std::cout << head->data << std::endl;
    head->printLinkedList(head);
    return 0;
}