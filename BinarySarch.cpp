#include<iostream>
using namespce std;

int binarySearch(vector<int> &input, int target){

int low = 0;
int high = input.size()-1;
int mid = 0;

while(low<=high){
    int mid = (low+high)/2
    if(input[mid] == target){
        return mid;
    }
    if(target<input[mid]){
        high=mid-1;
    }else{
        low=mid+1;
    }
}-
return -1;

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
    cout<<binarySearch(input, target)<<endl;

    return 0;

}