#include<iostream>
using namespace std;

class linkedNode{
    public:
    int data;
    linkedNode* next;
}
//constructor
linkedNode(int data){
    this->data = data;
    this->next = NULL;
}
// write a destrictor
~Node(int data){
    int value = this->data;
    // memmory free
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
    cout<<" memory is free node with data "<< value << endl;
}

// insertion 
void InsertAtHead(Node* &tail, int data){
   // create a new node 
   node* temp  = new node(d);
   temp->next = head;
   head = temp;
}

void insertAtTail(Node* &tail, int data){
    // create a new node 
     node* temp  = new node(d);
     tail->next = temp;
     tail = temp;
}
void InsertAtPosition(int position, int d){

    // insert at start
    if(possition ==1){
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    // create a new node
     node* temp  = new node(d);
     nodeToInsert->next = temp->next;
     temp->next = nodeToInsert;
}

void print(node* &head){
   node* temp = head;

   while(temp != NULL){
    cout<<temp->data<<" ";
    // temp ko aage bada do
    temp = temp->next;
   }
}

// write a function to delete node
void DeleteNode(int position, int &head){
    // delete a first and last node 

    if(position==1){
     Node* temp = head;
     head = head->next;
     // memmory free start node
     temp->next = NULL;
     delete temp;   
    }
    else{
        // deleting middle and last node
       Node* curr = head;
       Node* prev = NULL;

       int cnt =1;
       while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
       }
       prev->next = curr->next;
       curr->next = NULL;
       delete curr;
    }
}

// iterative way to reverse the linklist
Node* reverse (Node* &head){

    Node* prevptr =  NULL;
    Node* currptr = head;
    Node* nextptr;

    while(curr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

// Recursive way to reverse the linked list

// base case
if(head==NULL || head->next == NULL){
    return head;
}
Node* reverseRecursion( Node* &head){
    Node* newhead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
int main(){
    //create a new node
    Node* node1 = new Node(10);

    // head pointed to node1
    Node* head = node1;

    Node* tail = node1;
    print(head);

InsertAtHead(head, 12);
print(head);

insertAtTail(tail, 12);
print(tail);

InsertAtPosition(head, 3, 45);
print(head)

DeleteNode(4, head);
print(head);
  return 0;
}