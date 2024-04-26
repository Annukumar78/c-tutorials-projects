#include<iostream>
#include<stack>
using namespace std;

 class TwoStack{
    int arr*;
    int top1;
    int top2;
    int size;

    public:
    // initialize two stack
    TwoStack(int s){
        this->size = s;
        top1= -1;
        top2 = s;
        arr = new int[s];
    }
    //push in stack
  void push1(int num){
   //atleast a empty space present
   if(top1 - top2 > 1){
      top1++;
      arr[top1] = num;
   }else{
    cout<<" stack is overflow"<<endl;
   }
  }
  void push2(int num){
   //atleast a empty space present
   if(top2 - top1 > 1){
      top2++;
      arr[top2] = num;
   }else{
    cout<<" stack is overflow"<<endl;
   }
  }

  // pop from stack 1 and return popped element
  int pop1(){
    if(top>=0){
        int ans = arr[top1];
        top1--;
        return ans;
    }else{
        retuen -1;
    }
  }
  // pop from stack 2 and return popped element
  int pop2(){
    if(top2 < size){
        int ans = arr[top2];
        top2++;
        return ans;
    }else{
        retuen -1;
    }
  }
 };
int main(){

    return 0;
}