#include<iostream>
using namespace std;

class parents{
    public:
   int  a=10;
   int  b=12;

    protected:
    int x;

    private:
    int y;
}

class Child1:public parents{
    //a and b will be accssesebal
    //x will be remaining
    // y will be not be accesebal;
}

class Child2: private parents{
    // only y can we accesebal
    // not a and b accsesbal
    // not x accsesbal
    
}
class Child3: protected parents{
    //  not only y can we accesebal
    //  a and b accsesbal
    //  x accsesbal

}

int main(){

    return 0;
}