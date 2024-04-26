#include<iostream>

using namespace std;
//Repadetly find the min element in unorderded array and place at the begining 
void selectionSort(vector<int> &v){

    int n= v.size();

    for(int i=0; i<n-1; i++){
        // finding min element in unsorted array
        int min_index=i;
    for(int j= j+1; j<n; j++){
        if(v[j]<v[min_index]){
            min_index = j;
        }
    }
    // placing min element at begigning
    if(i!=min_index){
        swap(v[i], v[min_index]) ;
    }
    }
}

int main(){

int n;
cin>>n;

vector<int>v(n);

for(int i=o; i<n; i++){
    cin>>v[i];
}

selectionSort(v);

for(int i=o; i<n; i++){
    cout<<v[i]<<" ";
}

    return 0;
}

/*
 // this code is selection algorithum
 void selectionSort(vector<int>&v){
    int n = v.size();

    fot(int i = 0; i<n-1; i++)(
        int min_index = i;
    fot(int j=j+1; j<n; j++){
        if(v[j]<v[min_index]){
            min_index = j;

        }

    }
    if(i!=min_index){
        swap(v[i], v[min_index]);-+
    }
    )
 }
*/