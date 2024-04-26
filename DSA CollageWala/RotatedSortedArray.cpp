#include<iostream>
#include<vctor>
using namespace std;

int SortedRotatedArray(vector<int>&nums, int target){
   int low =0; 
   int high= nums.size()-1;
   while(low<=high){
       int mid = low + (high-low)/2;
    if(nums[mid] == target){
        return mid;
    }
 if(nums[mid]> nums[low]){
    if(target> nums[low] and target <= nums[mid]){
        hi =mid-1;
    }else{
        low = mid+1;
    }
 }else{
    if(target>= nums[mid] and target<=nums[high]){
        low = mid +1;
    }else{
        high= mid-1;
    }
 }

   }
}

int binarySearchSortedroteArray(vector<int>&input, int target){
    int low=0;
    int high = input.size()-1;
    int mid = 0;

    while(low<=high){
     int mid = low + (low-high)/3;
     if(input[mid] == target){
        return mid;
     }
     if(input[mid] >= input[low]){
       if(target >= input[low] and target <= input[mid]){
        high = mid -1;
       }else{
        low = mid+1;
       }
     }else{
        if(target>= input[mid] and target<= input[high]){
            low = mid+1;
        }else{
            high = mid-1;
        }
     }
     return -1;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>input;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        input.push_back()
    }
    int target;
    cin>>target;

    cout<<binarySearchSortedroteArray(input, target)

    return 0;
}