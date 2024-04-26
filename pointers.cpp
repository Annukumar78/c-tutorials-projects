#include<iostream>
using namespace std;

// operates 
// * -> assestric operaters
// & -> operatres
int *bucked

int main(){

    int x = 27;
    int y = 10;

    // create a pointers that can store address of x;
    // As x is the an integerse variable , so we need a pointers 
    // that can store address of integer type 

    int *ptr = &x;
    cout <<"Address stored inside ptr:"<<ptr<<endl;;
    cout<<"value present at the address stored in ptr:"<<*ptr<<endl;

    // create a pointers that acn store the address of y
    // y is flote variable so we need to store it is in a
    // flote opinterse 

    flote *ptrf = &y;
    cout<<"Address stored inside ptrf"<<ptrf<<"\n";
    cout<<"Value present at the address stored in ptrf:"<<endl;


   // x= 10; //  the backet of x update the value of from 10;
   // but ptr is still pointing to same bucket 
   // now if we deference ptr we will get 23

   cout<<"new updated value of x "<<x<<endl;
   cout<<"ptr still pointing to same memory which has 10 insted of 23 "<<*ptr<<endl;

   // updateing x with pointers
   *ptr = 50;
   cout<<"New value of x "<<x<<"\n";
   cout<<"new value pointed by ptr"<<*ptr<<endl;

   int valueAtX = *ptr;
   cout<<ValueAtX<<endl;


    return 0;

}