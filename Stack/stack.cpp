#include<iostream>
#include<stack>
usimng namespace std;

int main(){

// creation of stack
stack<int>s;

// push operation 
s.push(2);
s.push(4);
s.pop(3)

cout<<"printing the top element"<<s.top()<<endl;

if(s.empty()){
    cout<<"stack is empty"<<endl;
}else{
    cou<<"stack is not empty"<<endl;
}
    return 0; 
}