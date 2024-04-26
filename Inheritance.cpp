#include<iostream>
using namespace std;

// -------- Singal Inheritance ------------//

class parents{
    public:
    // this is write the constructor to check the parents
    parents(){
        cout<<"parents class"<<endl;
    }
}

class Child1:public parents{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
}

// -------------Multileval Inheritance --------------//

class grandChild: public parents{
    public:
    grandChild(){
        cout<<"grandChild class"<<endl;
    }

}

// ---------multiple Inheritance --------------//

class parents1{
   public:

   parents1(){
    cout<<"parents1 class"<<endl;
   }
}

class parents2{
   public:

   parents1(){
    cout<<"parents2 class"<<endl;
   }
}

class Childs: public parents1, public parents2{
    public:

     childs(){
        cout<<"Chils class"<<endl;
    }
}

//-----------Hierarchical Inheritance -------------//

class prents1{
    public:

    parents1(){
        cout<<"parents1 class"<<endl;
    }
}

class chiled1: public parents1{
   public:
     chiled1(){
        cout<<"Chiled1 class"<<endl;
     }
}

class chiled2: public parents1{
   public:
     chiled1(){
        cout<<"Chiled2 class"<<endl;
     }
}

// hybrid inheritance are the combination of multilevel and hirarcical inheritance 

// Diamonds problems 
class parents{
    public:
    parents(){
        cout<<"parents class"<<endl;
    }
}

class Child1: public Parents{
    public:
      child1(){
        cout<<"child1 class"
        
      }
}
class Child2: public Parents{
    public:
      child2(){
        cout<<"child2 class"

      }
}
// polymorphism
// its ability to take objets and methods in diffrents from
// thare are to type of 1. compailtime 2. Runtime 
// compaile time also two types 1. Function Overloading 2.operater overloading

// function overloading
class sum{
  public:
  void add(int x, int y){// create a function 
     int sun = x+y;
     cout<<sum<<endl;
  }
  void add(int x, int y,int z){// create a function 
     int sun = x+y+z;
     cout<<sum<<endl;
  }
  void add(float x, float y){// create a function 
     float sun = x+y;
     cout<<sum<<endl;
  }
}

// operator overloading

class parents1{
    public:
    int x;
    int y;

    complex(int x, int y){
        real = x;
        img = y;
    }

    complex operator+ (complex &c){
        complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
}

// run time overloading 

class parent{
    public:
    virtual void print(){
        cout<<"parent class"<<endl;
    }
    void show(){
        cout<<"parents class"<<endl;
    }
}

class childes: public parents{
    public:
    void print(){
        cout<<"childes class"<<endl;
    }
    void show(){
        cout<<"childes class"<<endl;
    }
}

// friends function concepts 

class A{
    int x;

    public:
    a(int y){
        x=y;
    }
    friend void print(A &obj);
};

void friend(A &obj){
    cout<<obj.x<<endl;
}



int main(){

    // friend function
   A obj(5);
   // cout<<obj.x;
   print(obj);
    // runtme overloading

    parent *p;
    childes c;

    p = &c;
    p->print();
    p->show();


    // operater overloading 
    complex c1(1,2);
    complex c2(1,3);

    complex c3= c1+c2;

// function overloading 
    sum s;
    s.add(2,4);
    s.add(3,5,4);
    s.add(float(2.4),float(2.6));

    return 0;
}