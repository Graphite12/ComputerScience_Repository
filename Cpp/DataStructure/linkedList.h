#ifndef CARBON_LINKED_LIST_H
#define CARBON_LINKED_LIST_H

using std::optional;

struct Node
{  
       int data;    //노드에 저장할 데이터
       optional<Node*> prev;  //앞 노드를 가르키는 포인터
       Node* next;  //뒷 노드를 가르키는 포인터
};


class LinkedList
{   
private:

    Node* head;
    Node* tail;
    int size;
     
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    ~LinkedList();

    void insertNode(int data);
    bool deleteNode(int data);
    Node* searchNode(int data);
    void printList();
    bool is_empty();

}; 

/**
 * 이중 연결리스트
*/
class DoublyLinkedList
{
private:


    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

   void insertHead(int data); //연결리스트의 제일 앞부분추가
   void insertTail(int data); //연결리스트의 제일 뒷부분추가

   bool deleteHead(int data);
   bool deleteTail(int data);
   Node* serarchNode(int data);

   void printList();
   bool is_empty();
};

#endif