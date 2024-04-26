#include<iostream>
using namespace std;

void CountSort(vector<int> &v){

    int n = v.size();

    // find the max element 
    int max_ele = INT_MIN;
    for(int i=0; i<n; i++){
        max_ele=max(v[i],max_ele);
    }

    // create the freq array
    vector<int> freq(max_ele+1,0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }
    // calculative the comulative freq
    for(int i=1; i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }
    // calculated the sorted array
    int a;
    for()
}
int main(){

int n;
cin>>n;

vector<int>v[n];

for(int i=0; i<n; i++){
    cin>>a[i];
}
CountSort(a);

for(int i=0; i<n;i++){
    cout<<v[i]<" ";
}cout<<endl;
    return 0;
}