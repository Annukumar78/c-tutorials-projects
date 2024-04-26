#include<iostream>
using namespace std;

class Node(){
    public:
    int data;
    Node* prev;
    Node* next;

    // create a constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
}
// create a disconstructor
~Node(){
    int val = this->data;
    if(next != NULL){
        delete next;
        next = NULL;
    }
    cout << "memory free for node with data"<< val << endl;
}

// print the linkedlist
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
// find the length of Doubly linkelist 
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp ->next;
    }
    return len;
}

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head= temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(10);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* &head, int position, int d){
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<postion-1){
        temp = temp->next;
        cnt++;
    }

    // insert at last postion
    id(temp->next == NULL){
        insertAtTail(tail, d);
        return
    }
    // creating a node of d 
    Node* nodeToInsert = new Node(d);
    Node* nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

// deleting at the linkedlist 
void deleteNode(int position, Node* &head){
    // deleting first and lat node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL; 
        delete temp;
    }else{
        // deleting any middle and last node
       Node* curr = head;
       Node* prev = NULL;

       int cnt  = 1;
       while(cnt < position){
        prev = curr;
        curr = curr ->next;
        cnt++;
       }
    }

}
int main(){

Node* node1 = new Node(10);
Node* head = node1;

print(head);
cout<<getLength(head)<<endl;

InsertAtHead(head, 23);
print(head);

InsertAtPosition(tail, head, 3, 100);
print(head);
    return 0;
}