#include<iostream>
using namespace std;
/*
introduction-> 
*/

int main(){

    int x = 80;
    cout<<&x;

    // create a pointers bakets 
    int *ptr // decelering the pointer   // using this we can store address of integer variable
    ptr = &x; // re-assignment / update are not used the decelaration mark
    int x = 20;
    int *ptr = &x;// in this line storet he address of the x in ptr 

     float y = 10;
    float *ptr = &y;

    // Dereferencing -------->>
    // Address to value conversion are colled the dereferencing 
    // it is used the cout<<*(pointersname)<<endl;

    int kumar = 20;

    int *ptr = &kumar;
    
    int kumar = 30;
   
 cout<<ptr<<endl; // its only print the address of the bucket(container)
 cout<<*ptr<<endl; // its prints the value of this perticular memory address



  // --------------lecture number 02 -----------// 
   // pointers pass by refference 

 int swap(int *x, int *y){
     //try to swap x and y
     int temp = *x;
     *x = *y;
     *y = temp;
 }

   int x = 12;
   int y = 34;

   int *p1 = &x;
   int *p2 = &y;

   swap(x,y);

   cout<<x<<" "<<y<<endl;
    return 0;
}