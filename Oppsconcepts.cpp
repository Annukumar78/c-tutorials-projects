#include<iostream>
<include<vector>

using namespace std;

class fruit{
    public:
    string name;
    string color;
}


int main(){

    fruit apple;// objects
    apple.name="apple";
    apple.color="red";
    cout<<apple.name<< "- "<<apple.color<<endl;

    // using pointers to create new objects

    fruit *mango = new fruit();
    mango->name = "Mango";
    mango->color ="yellow";
    cout<<mango->name"-"<<mango->color<<endl; 


    return 0; 
}