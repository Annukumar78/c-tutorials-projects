#include<iostream>

using namespace std;

// bobble sort algorithum

int bubbleSort(vector<int>&v){

int n=v.size();

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
        if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
        }
    }
}
return ;

}

int main(){
 int n;
 cin>>n;

 vector<int>v(n);
 for(int i=0; i<n; i++){
    cin>>v[i];
 }

   bubbleSort(v);

   for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
   }

}

/*
int bubaleSorted(vector<int>&v, int n){
    int n=v.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1])
            }
        }
    }
    return;
}

int bubbleSort(vector<int>&v, int n){

int n=v.size();

flag = false
for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
        if(v[j]>v[j+1]){
            flag = true;
            swap(v[j],v[j+1]);
        }
    }
    if(!flag ) break;
}

return ;

*/ 