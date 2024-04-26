#include<iostream>
using namespace std;

int binarySearchRecursive(vector<int>&input, int target,int low,int high)

if(low> high){
    return -1;
}
int mid = (low+high)/2;
if(input[mid]==target){
    return mid;
}
if(input[mid]<target){
    return binarySearchRecursive(input, target, mid+1, high)
}
else{
    return binarySearchRecursive(input, target, mid-1, low)
}
int main(){
 
  int n;
    cin>>n;

    vector<int>input;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        input.push_back();
    }
    int target;
    cin>>target;
    cout<<binarySearchRecursive(input, target, 0, n-1)<<endl;

    return 0;
}