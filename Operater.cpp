#include<iostream>
using namespace std;

int main()
{
   int num1 = 6;
   int num2 = 3;

   cout<<"Addition"<< num1+num2 <<endl;
   cout<<"Addition"<< num1-num2 <<endl;
   cout<<"Addition"<< num1*num2 <<endl;
   cout<<"Addition"<< num1/num2 <<endl;
   cout<<"Addition"<< num1%num2 <<endl;

   cout<< (num1==num2) <<endl;

   // logical operaters

   bool exp1 = true;
   bool exp2 = false; 
   cout<<(exp1&&exp2)<<endl;
   cout<<(exp1||exp2)<<endl;
   cout<<(!exp1)<<endl;
   cout<<(!exp2)<<endl;

   int a = 4;
   cout<<sizeof(a)<<endl;

   
    return 0; 
} 