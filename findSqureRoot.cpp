#include<iostream>
#include<c.math>
using namespce std;

int finsSqureRootOf( int x){
    int low = 0;
    int high = x;
    int mid = 0;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(mid*mid <= x){
           ans = mid;
           low = mid+1;
        
    }
    else{
        high = mid-1;
    }
    return ans;
}

int main(){

    return 0;
}