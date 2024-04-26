#include<iostream>
using namespace std;
// function are created alwayas the above the main function
int main(){
// advantage of c++
// it is performe high performence application 
// c++ are two types of comments singal line nad multiple line
// a variable is a container to store the similar type of values 
// int , double, flote, string, char boole

int myNum; // it is decelayer the variable 
myNum = 20; // it is initialize the variable
cin>>myNum;
cout<<" Enter the value of myNum"<<myNum<<endl;
// const are deceleare it must be not change the value of variable

// user input 
int x;
cout<< "Enter the value of x :";
cin>>x;
cout<<"your number is"<<x<<endl;

// data types -> the data type are specife size and type of value are store
// int , double, string, char, boolen

// operator are used to performe the operation variable and value;
// authmatic operator
// assinment operatorr/
// logical operator
//ternary operator
//comparision operator
//bitwise operator

// string concetinate 
// it is menas the cjoint the to string in one string 
// it is used + operator

// if you fine the size || lenth to string are used the 
// length(), size()// method it is all difint build in

// the access of string charactor are used the array indexing
string muNumber = "ASDFGJHKLMNBVCXZTYIDOWDERHSBD"
cout<<muNumber[9]<<endl;

// mathmatice operation
// coil-> are the used of the return the value of x nearest the integers

// if- else condition
// if-else are used the performe the differnt diffrent task and check the multiple condition

if(condition){
    // condition are true run this block of code
}else{
    // condition are false run this block of code
}

// multiple condition are the check in this condition
if(){
    // condition one check
}else-if(){
     // condition second are the check
}else-if(){
     // condition are third are the check
}else{
   // this code of block are the run condition are the false
}

// if-else turnary operator
// variavle = (condition) ? expretion are true: expresion are false


// switch acse are the used of the select one of the many

int day = 5;
switch(day){
    case 1:
    cout<<"monday"
    break;

    case 2:
    cout<<"Tuesday"
    break;

    case 3:
    cout<<"wednesday"
    break;

    case 4:
    cout<<"thusday"
    break;

    default
      cout<<"the day are not found"
} 

// while loop are the used of the block of code condition are the true
while(condition){
    //run this block of code again and again while condition are not false
    // if you reached the false condition break the code and execute the code
}

do{
  // condition are one time execute the condition are false 

}while(){
    //run this block of code again and again while condition are not false
    // if you reached the false condition break the code and execute the code
}

//for-loop
//for loop-> if you know how many times are the loop throww
// a block of code

for(int i=0; i<n; i++){
  //  code block to be execute
}

// nested loop are the colled loop are the inside of the loop
  for(int  i=0; i<=10; i++){
    for(int j=1; j<=10; j++){
        // code to be execute
    }
  }
   // Breack
  // breack are the used of the stop the condition

  // Continue
  // the continue are the used the condition are the run again again and skip 
  // purlicular task and run again

  // array
  // array are the used of the store multipale value in single container
  // array are the used of the itrate the indexing searchin and shorting the string
  // find the lenth of the variable

  int arr[20]; // 20 size of array are the decelayer
  int arr[20] = ["", " "," "] // intisilize the value of the array
  sizeof()// it is give the size of the array
  arr[9]// it is give the 9 index value 

 array size = sizeof(arr)/sizeof(int);

 // structure the block of code to decelayer the variavle
 // now used in this variavle creating aobject and used the variable

 // refereses are the two types 
 // called by value -> it is create the duplicate copy of the variable 
 // called by the reference-> "&->And operator" in thid condition are the changed of the man variable 

 // pointer
 // the pinter are the gives of the value and memmory address of the variable
 strint car = "maruti suzuki";
 string* ptr = &car;

 cout<<ptr<<endl; // it gives the memory address of the car;
 cout<<*ptr<<endl; // it is give the value of the car ;

//function 
// A function is a block of code to run the specifice task
// the using the function are resuning the code

dataTypes functionName(pass parameters ){
    // write a code which action are the performe    
}

// called the function -> inside the main function
 functionName();// it is colled the function

 // function decelaratin
 // function defination

void addTwoNumber(int data1, int data2 ){
    // function perameter
    // it is callled the function deceleration
    // function arguments
    // it is called the function exicution
}

// return 
// the void are not be return anyvalue
// return keyword are used the function are the return value


// the array inside the function
void myFunction(int muNumber){
    // write the code to performe the task
}
// function overloadding
// the function overloadding are the multiple function are the same name but diffrent parameters

//recursion is the technique are the function called it self 
//


// oops- are the called object oriented programming
// classes
//object
//inherites
//abstruction
//polomorphism
//encapsulation

//classes are the diffend off the all are the called
// and object are defined is the type of the class data

// creating a class 
class myNum{
    public: // it is called access specifer
    int Number// variable (attribute)
    string myString // string variable
}

// creating a object of myNum class
// myNum myobject; // created a object

//myobject.number = 10;

// creating a multiple object in one class
myNum object1;
myNum object2;
myNum object3;

// crete a methot two types 
// inside the class
// outside the class

class myClass{
    public:
    void myMethod(){// method function defined inside the class
        cout<<"Hello Word";
    }
}
class myClass1{
    public:
    int number;// variable declaration
    void myMethod();//method function decelaration 
}

void myClass1::myMethod(){
    cout<<"Hello world";
}

int main(){
    Myclass1 myobj; // create a object of myclass1
    myobj.myMethod(); // call the method 
}

class myClasses{
    public: // access specifier
    myClasses(){ // create a constructor
        cout<<" Enter the value of x";
    }
}
int main(){
    myClasses myObject; // Create an object of myClasss(this will be called constructor)
}

// crete a construtor
// this is create the class and constructor
class Car {
    public:
     string brand; // variable decelear (Attribute)
     string modal; // variable decelaear (Attribte)
     int year; //

     Car( string x, string y, int z) // creating a constructor with parameter
     brand = x;
     modal = y;
     year = z;
};

int main(){
    // create car object and all the constructor with diffrent value
    Car carObje1("BMW", "X5", 1999);
    Car carObje2("Ford", "Mustang", 1963);
}

// access apecifer are the  three types
// public // member are the accessible from outside the class
// private // member cannat be accessed from outside the class
// protected // only accessble from inherited classes

//Encapsulation
// the meaning of the encapsulation are the sensetive data are the hideen
// if you want to read and modify the value of private member are provided the get and set method
// if you want achive this you are the used of the classes aret he private

class Employee{
    private:
    int salary; // careted a salary variable in private class

    // if you want the read nad modify are the used of getter and setter

    // setter
    void setSalary(){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    Employee.Obj1;// create aobject
    Obj1.;setSalary(20000);
    cout<<Obj1.getSalary()<<endl;

}

// c++ inheritance are the pissible attribute and method are the access one class to anothe class
// derived class
// base class

// types of inheritance 
//singal inheritence -> one base class to inherit one chaile class
//multiple inheritance-> are the two or more base classes are the derived one derivedd class
//multileval inheritence-> one base class are the derived one chil class and one child class are the derived of another child class
//hybrid inheritence 
// hyrarical inheritence

// singal inheritence 
class myClass{
    public:
    string modal;

    void num(){
        cout<<" what is the car!";
    }
};

class myClass1: public myClass{
    public:
    string brand;
}

// Multiple inheritance
class myClass2{
    public:
    int number;
    void add(){
        cout<<"addition of two numbers";
    }
}

class myClass3{
    public:
    bool val ;
    void Right(){
        cout<<"the value is true or false";
    }
}

class myClass4:public myClass2,myClass3{
    // this is called the multiple inheritence
}

// polymorphism
// many claseses are the related to each other by inheritence
    return 0;
}