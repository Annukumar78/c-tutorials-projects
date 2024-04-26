#include<iostream>
#include<queue>
using namespace std;

class Queue{
   
    int arr*;
    int size;
    int front;
    int rear;

     public:
     // constructor 
     queue(){
        size = 10000;
        arr = new int [size];
        front = 0;
        rear = 0;
     }

     /* -----------Public function of queue--------*/

     bool isEmpty(){
        // implement the isEmpty() function
        if(front == rear){
            return true;
        }else{
            return false;
        }
     }

     void enqueue(int data){
        if(rear == size){
            cout<<"Queue is full" << endl;
        }else{
            arr[rear] = data;
            rear++;
        }
     }
     void dequeue(){
        if(front == rear){
            return -1;
        }else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
     }

     int front(){
        if(front == rear){
            return -1;
        }else{
           return arr[front];
        }
     }
}


int main(){

    return 0;
}