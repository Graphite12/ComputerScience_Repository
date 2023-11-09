#include <iostream>
#include "linkedList.h"

using std::cout;
using std::endl;
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
    size++;
}
 

bool LinkedList::deleteNode( int data) {
    Node* current_node = head;
    
    if(current_node == null)  {
        cout << 'Node를 찾을 수 없습니다.' << endl;
        return false;
    }

    while (current_node != nullptr && current_node->data != data) 
    {  
        current_node = current_node->next
    }
    


   Node* currentNode = head;          

 
   delete currentNode;                      
   size--

   return true;
}

Node* LinkedList::searchNode(int data) {
        Node* currentNode = head;

    while (currentNode != nullptr && currentNode->data != data)
    {
        currentNode = currentNode->next;
    }

    return currentNode;    
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

bool DoublyLinkedList::deleteHead(int data) {
     
      if(is_empty()){
        cout << '이미 빈 상태입니다.' << endl;
        return false;
      }

      struct Node* currentNode = head;

      if(head == tail) {
        tail = nullptr;
      }

      int delValue = currentNode->data;
      head = head->next;

      delete currentNode;    

      size--;

      cout << '삭제된 머리 데이터:' <<  delValue << endl;
      return true;

}

bool DoublyLinkedList::deleteTail(int data) {
    if(is_empty()){
        cout << '이미 빈 상태입니다.' << endl;
        return false;
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

      cout << '삭제된 꼬리 데이터:' <<  delValue << endl;
      return true;

}

Node* DoublyLinkedList::serarchNode(int data){
    Node* currentNode = head;

    while (currentNode != nullptr && currentNode->data != data)
    {
        currentNode = currentNode->next;
    }

    return currentNode;      
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

