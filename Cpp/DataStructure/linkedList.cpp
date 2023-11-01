#include "node.h"
#include "linkedList.h"


void LinkedList::printList()
{
    Node* currentNode = this->head;

    while (currentNode->next != nullptr)
    {
        std::cout << "노드:" << currentNode; << std::endl;
        std::cout << "데이터:" << currentNode->data << std::endl;

        currentNode = currentNode->next;
    }
    
}
void LinkedList::appendNode(int data)
{
    Node* newNode = new Node(data);

    if(this->head == nullptr){
        this->head = newNode;
    } 

    Node* currentNode = this->head;
    while(currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
}

void LinkedList::deleteNode(int data)
{
    Node* previousNode = nullptr;
    Node* currentNode = this->head;

    while(currentNode != nullptr && currentNode->data != data) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    if(currentNode == nullptr) {
        return;
    }

    if(previousNode != nullptr) {
        previousNode->next = currentNode->next;
    } else {
        this->head = currentNode->next;
    }

    delete currentNode;
}