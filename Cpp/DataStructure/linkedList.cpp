#include <iostream>
#include "linkedList.h"


/**
 *  싱글 연결리스트
 * 
*/
void LinkedList::insertNode(int data) {
                                              //(struct Node*)malloc(sizeof(struct Node));
    struct Node* newNode = new struct Node();  //struct Node의 크기만큼 메모리 블록할당.
    newNode->data = data;     // 새 Node에 입력받은 데이터 할당.
    newNode->next = nullptr;

    if(head == nullptr) {
        head = newNode;
        tail = newNode;
    }
     
    tail->next = newNode;       //리스트 추가
    tail = newNode;             // 포인터 
}
 

void LinkedList::deleteNode( int data) {
   Node* currentNode = prev->next;          //이전 Node가 가르키는 현재노드
   prev->next = currentNode->next;          // 현재 노드의 tail로 붙는 Node와 이전 Node 결합.
   delete currentNode;                      // 동적할당된 힙에서 삭제
}


void LinkedList::printList() {
    Node* currentNode = head;
    while(currentNode != nullptr){
        std::cout << "%d " << currentNode << std::endl;
        currentNode = currentNode->next;
    }
}

/**
 *  이중 연결리스트
 * 
*/

//초기화
void DoublyLinkedList::DoublyLinkedList() {
    head = tail = nullptr;
    size = 0;
}

void DoublyLinkedList::insertHead(int data) {
    Node* newNode = new Node();
    
    newNode->data = data;



    if(head == null) {
        head = newNode;
        tail = newNode;
    } 

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
    size++;
}

void DoublyLinkedList::insertTail(int data) {
    Node* newNode = new Node();
    newNode->data = data;

    if(tail == null) {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    size++;
}

void DoublyLinkedList::deleteHead(int data) {
     
      if(is_empty()){
        return 0;
      }

      struct Node* currentNode = head;

      if(head == tail) {
        tail = nullptr;
      }

      int delValue = currentNode->data;
      head = head->next;

      delete currentNode;    

      size--;

      return delValue;

}

void DoublyLinkedList::deleteTail(int data) {
    if(is_empty()){
        return 0;
    }

    Node* currentNode = tail;

    if(head == tail) {
        head = nullptr;
      }

      int delValue = currentNode->data;
      tail->next = nullptr;
      tail = tail->prev;

      delete currentNode;    

      size--;

      return delValue;

    size--;
}

Node* DoublyLinkedList::serarchNode(Node* head, int data){
    Node* currentNode = head;

    do
    {
        if(currentNode->data == data) {
            return currentNode;
        }

        currentNode = currentNode->next;
    } while (currentNode != head);
    
}
void DoublyLinkedList::printList() {
    struct Node* currentNode = head;

    while(currentNode != nullptr) {
        std::cout << currentNode->data << " ";
        std::cout << "사이즈" << size << " ";
        currentNode = currentNode->next;
    }
    std::endl;
}

bool DoublyLinkedList::is_empty() {
    return size == 0;
}







