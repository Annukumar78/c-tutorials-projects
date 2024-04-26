#include<iostream>
#include<string>

using namespace std;

void f(int *arr, int idx, int n){
    // base case 
    if(idx == n){
        return ;
    }
    cout<<arr[idx]<<"/n";

    //asumption
    f(arr, idx+1, n);
}

// ======== find the maximum of array =============//

int f ( int *arr, int idx, int n){
    if( idx = n-1){
        return arr[idx];
    }
    return max(arr[idx], f(arr, idx + 1, n);)
    //|this is current element| this is remaning element 
}

int main(){
int n = 10;
int arr[10] ={1,2,3,4,5,6,7,8,9,10};
f(arr, 0, n);
    return 0;
}