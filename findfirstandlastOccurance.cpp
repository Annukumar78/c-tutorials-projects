#include<iostrea>
#include<vector>
using namespace std;

int firstIndex(vector<int>&input, int target){

    int low = 0;
    int high = input.size();
    int mid = 0;
    int ans = -1;

    while(low<=high){
        int mid = low + (low + high)/2;
        if(input[mid] >= target){
            ans= mid;
            high = mid -;
        }
        else {
            low = mid+1;
        }
    }
}
int secondIndex(vector<int>&input, int target){

    int low = 0;
    int high = input.size();
    int mid = 0;
    int ans = -1;

    while(low<=high){
        int mid = low + (low + high)/2;
        if(input[mid] > target){
            ans= mid;
            high = mid -1;
        }
        else {
            low = mid+1;
        }
    }
}


int main(){
    int n;
    cin>>n;

    vector<int>input;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        input.push_back();
    }
    int target;
    cin>>target;

    std:: vector<int>result;
    int lb = firstIndex(input, target);
    if(input[lb] != target){
        result.push_back(-1);
        result.push_back(-1)
    }
   else{
    int ub =secondIndex(input, target);
    result.push_back(lb);
    result.push_back(ub-1);
   }
   cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}