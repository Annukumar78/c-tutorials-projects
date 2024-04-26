#include<iostrea>
using namespace std;

int FirstOccurance(vector<int>&input, int target){

    int low = 0;
    int high = input.size()-1;
    int mid = 0;

 int ans = -1;
    while(low<=high){
        int mid = low(high-low)/2;
        if(input[mid] == target){
            ans = mid;
            high = mid-1;
        }
        else if(input[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

 return ans;
}

int main(){
    int n; 
    cin>>n;

    vector<int>input;

    for(int i=0; i<n ;++){
        int x;
        cin>>x;
        input.push_back();
    }
    int target;
    cin>>target;
    cout<<FirstOccurance(input, taget)

    return 0;
}