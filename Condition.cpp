#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age<12 ){
        cout<<"Child"<<endl;

    }
    else if(age>18){
        cout<<"this is adults"<<endl;
    }
    else{
        cout<<"Teenagers"<<endl;
    }

    //----------------//--------------

    // operaters

    int num;
    cin>>num;

    if(num%2==0) && (num%3==0){
        cout<<num<<endl;
    }

    return 0;

}