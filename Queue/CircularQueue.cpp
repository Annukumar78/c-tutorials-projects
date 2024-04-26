#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
    int *arr ;
    int size;
    int front;
    int rear;

    public:
    // initialize your data structure
    CircularQueue(int n)P{
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }

    // enqueue x into the queue return true if it gets pushed into the stack

    bool enqueue(int value){
        if(front == 0 && rear == size-1) || (rear == (front-1)%(size-1)){
            cout<<"Queue is Full";
            return false;
        }else{
            if(front == -1) // first element
        }
        front = rear = 0;
    } else if(rear == size-1 && front != 0)
    {
       rear = 0;
    }else{
        rear++;
  
    }
    arr[rear] = value;
    return true;

    void dequeue(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front]= -1;
        if(front == rear){// singal element is present 
          front = rear = -1;
        }else if(front == size -1){
            front = 0;
        }else{
            front++;
        }
    }
}

int main(){

    return 0
}