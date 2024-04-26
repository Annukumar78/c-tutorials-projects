#include<iostream>
using namespace std;

// stack implementation 
class Stack{
     // ptoperties
     public:
     int *arr;
     int top;
     int size;

     // constructor(behaviour)
     Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
     }
 void push(int element){
       if(size- top > 1){
         top++;
         arr[top] element;

       }else{
        cout<<"Stack is overflow"<<endl;
       }
 }
 void pop(){
     if(top>= 0){
        top--;
     }else{
        cout<<" Stack is empty"<<endl;
     }
 }

 int peak(){
    if(top>= 0 ){
        return arr[top];
    }else{
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    
 }

 bool isEmpty(){
     if(top == -1){
        return true;
     }else{
        return false;
     }
 }
};
int main(){

  stack<int>st(5);

  st.push(22);
  st.push(12);
  st.push(42);
  st.push(52);

  cout<<st.peak() <<endl;
  st.pop();

  cout<<st.peak()<<endl;
  st.pop();
  
  cout<<st.peak()<<endl;
  st.pop();
    return 0;
}