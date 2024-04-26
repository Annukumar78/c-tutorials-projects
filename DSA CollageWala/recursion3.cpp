#include<iostream>

using namespace std;

int f(int p, int q){
    // base case 
    if(q == 0){
        return 1;
    }
    return p*f(p,p-1)
}

// same case but second approch

int f(int p, int q){
    // base case
    if(q == 0){
        return 1;
    }
    if(q%2 == 0){

        int result = (f(p,q/2));
        return result * result;
    }else(
        // if q is the odd
        int result = f(p, (q - 1)/2);
        return p* result*result;
    )
}

int main(){
     int result = f(5,3);
     cout<<result;
    return 0;
}

