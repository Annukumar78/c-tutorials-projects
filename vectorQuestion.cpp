#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(6);

    for(int i = 0; i<6; i++){
        cin>>v[i];
    }

    cout<<"Enter x:";
    int x;
    cin>>x;

    int occurance = -1;
     for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurance=i;
        }
     }
     cout<<occurance<<endl;


     // Question second;

     vector<int>v(6);
     for(int i=0; i<v.size(); i++){
        cin>>v[i];
     }

     cout<<"Enter x:";
     int x;
     cin>>x;
     int occurances = 0;
      for(int ele:v){
        if(ele=x){
            occurances++
        }
      }
      cout<<occurances<<endl;
      
      // Question 3
  // take a input from the users
      vector<int>v(6);
      for(int i=0; i<v.size(); i++){
        cin>>v[i];
      }
      cout<<"Enter x:";
      int x;
      cin>>x;

      int count = 0;

      for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
      }
      cout<<count<<endl;

      // question 4

      int array[] = {1,2,3,4,5,6};
        bool sortedflag=true;
      for(int i=1;i<6; i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }
      }
      cout<<sortedflag<<endl;

      // question 5

      int array[] = {1,2,1,2,1,2};
      int ansum=0;
      for(int i=0; i<6; i++){
        if(i%2==0){
            ansum+=array[i];
        }
        else{
            ansum-=array[i]
        }
      }
      cout<<ansum<<endl;
    return 0;
}