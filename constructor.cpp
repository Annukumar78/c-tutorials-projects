#include<iostream>
using namespace std;

class rectangal{
    public:
    int l;
    int b;

    rectangal(){//defuilt constructor - no argument passed
        l=0;
        b=0;
    }
    rectangal(int x, int y){// parameteresed constructor -args pass
        l=x;
        b=y;

    }
    rectangal(rectangal &r){// copy constructor--initialize an obj by another exixting object
       l = r.l;
       b = r.b;

    }
}

int main(){

     rectangal r1;
     cout<<r1.l<<" "<<r1.b<<endl;

     rectangal r2(4,5);
     cout<<r2.l<<" "<<r2.b<<endl;
    return 0;
}