#include<iostream>
using namespace std;

/*
 insertion sort algorithum
 Definition-> Repedetly take elements from unorderded subarray and insert in sorted 
 subarrsy
*/
void InsertionSort(vector<int> &v){

    int n = v.size();

    for(int i=1; i<n; i++){
     int current_ele = v[i];
     int j = i-1;
    while(j>= 0 && v[j]> current_ele){
        v[j+1] = v[j];
        j--;
    }
    // insert tthe current element 
    v[j+1] = current_ele;
    }
}

int main(){

    int n;
     cin>>n;

     vector<int>v(n);

for(int i=0; i<n; i++){
    cin>>v[i];
}
 InsertionSort(v);
 for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
 }

    return 0;\

    /*

    void InsertionSort(vector<int>&v){

        int n = v.size();

        for(int i=0; i<n; i++){
            int current_ele = v[i];
            int j = i-1;
            while(j>=0 && v[j]>current_ele){
                v[j+1]= v[j];
                j--;
            }
            v[j+1]= current_ele
        }
    }
    
    */
}