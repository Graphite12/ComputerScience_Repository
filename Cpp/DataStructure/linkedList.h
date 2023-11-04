#ifndef CARBON_LINKED_LIST_H
#define CARBON_LINKED_LIST_H

class LinkedList
{   
private:
    struct Node
    {
       int data;
       Node* next;
    };
    Node* head;
    Node* tail;
    
  
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    ~LinkedList();

    void insertNode(int data)
    void deleteNode(int data);
    void printList();
}; 


/**
 * 이중 연결리스트
*/
class DoublyLinkedList
{
private:
    struct Node
    {
       int data;    //노드에 저장할 데이터
       Node* prev;  //앞 노드를 가르키는 포인터
       Node* next;  //뒷 노드를 가르키는 포인터
    };
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

   void insertHead(int data); //연결리스트의 제일 앞부분추가
   void insertTail(int data); //연결리스트의 제일 뒷부분추가
   void deleteHead(int data);
   void deleteTail(int data);
   Node* serarchNode(Node* head, int data);
   void printList();
   bool is_empty();
};

#endif