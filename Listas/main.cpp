#include <iostream>
#include "SinglyLinkedListNode.hpp"

int main(){
    SinglyLinkedListNode<char> * head = new SinglyLinkedListNode<char>('A');
    head = head->insertNodeAtTail(head, 'B');
    head = head->insertNodeAtTail(head, 'C');
    head = head->insertNodeAtTail(head, 'D');
    head = head->insertNodeAtTail(head, 'E');
    head->printLinkedList(head);

    std::cout << '\n';
    SinglyLinkedListNode<int> * head2 = new SinglyLinkedListNode<int>(1);
    head2 = head2->insertNodeAtTail(head2, 2);
    head2 = head2->insertNodeAtTail(head2, 3);
    head2->printLinkedList(head2);
    return 0;
}