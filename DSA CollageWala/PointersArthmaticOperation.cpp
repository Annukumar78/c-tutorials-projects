#include<iostream>
using namespace std;

int main(){
//----------------------
int x = 20;
int *ptr = &x;
cout<<ptr<<endl;

//------------------------
double dec = 3.534;
double *ptr1 = &dec;

cout<<"Size of x is: "<<sizeof(x)<<"\n";
cout<<"Size of dec is : "<<sizeof(dec)<<"\n";

cout<<ptr1 <<" "<<(ptr + 1)<<"\n";

//------------------//-----------------//
int arr[2] = {1,2};
int *ptr1 = &arr[0];

cout<<ptr<<" "<<*ptr<<endl;
cout<<ptr+1<<" "<<*ptr+1<<endl;

int a[3] = {1,3,5};
int(*p)[3] = &a;
cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<"\n";

    return 0;
}