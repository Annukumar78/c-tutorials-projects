#include<iostream>
#include<vector>

using namespace std;

void runningarray(vector<int> &v){

    for(int i=0; i<n; i++){
        v[i] +=v[i-1];
    }

    return 0;
}


int main(){

    int n;
    cin>>n;

    vector<int>v;
  for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
   v.push_back(ele);
  }

  runningarray(v);

  for(int i=0; i<n; i++){
    cout<<v[i]<<endl;
  }

 return 0;
}