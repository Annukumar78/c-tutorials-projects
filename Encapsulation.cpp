#incclude<iostream>
using namespace std;

class ABC{
    int x;

    public:
    void set(int n){
       x=n;
    }

    int get(){
        return x;
    }
}




int main(){

    ABC obj1;
    obj1.set(3);
   cout<<set.obj1<<endl;


    return 0; 
}