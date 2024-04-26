#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // distructor
    ~Node(){
        int value  = this->data;
        if(this->data != NULL){
            delete next;
            next = NULL;
        }
        cout<<" memory is free for node with data"<< value <<endl;
    }
}

void InsertAtHead(Node* &tail, int element, int d){
// asumming that the element is present in the list

// case to empty list
if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
}else{
    // non empty list
    // assuming that the element is present in the list

    Node* curr = tail;
    while(curr->data != element){
        curr = curr->next;
    }
    // element is found -> curr is representing element wala node
    Node* temp new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}
}

void print(Node* &tail ){
    Node* temp = tail;
    int cnt = 1;

    while(tail->next !=  temp){
     cout<<tail->data<<" ";
     tail = tail ->next;
    }
}

// deletion in circuly linked list
void deleteNode(Node* &tail, int value){
    // empty case 
    if(tail == NULL){
        cout<<" list is the empty, please check the again"<<endl;
        return;
    }else{
        // non empty case
        // assuming that "value is present in the linked list"
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev  = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr ->next = NULL;
        delete curr;
    }
}

int main(){

    return 0;
}