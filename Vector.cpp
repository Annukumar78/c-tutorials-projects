#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>v;

// for loops 
for(int i=0; i<5; i++){
    int element ;
    cin>>element;
    v.push_back(element);
}

for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

// for each loops 
for(int ele:v){
    cout<<ele<<" ";
}
cout<<endl;

// while loopps 
 int idx = o;
 while(idx<v.size()){
    cout<<v[i]<<" "
 }
    return 0;
}