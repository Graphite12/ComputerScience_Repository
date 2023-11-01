#ifndef CARBON_LINKED_LIST_H
#define CARBON_LINKED_LIST_H
#include "node.h"
class LinkedList
{   
private:

public:
    int data;
    Node* head;

    LinkedList() {
       this->head = nullptr;
    }

    void appendNode(int data);
    void deleteNode(int data);
    void printList();
}; 

#endif