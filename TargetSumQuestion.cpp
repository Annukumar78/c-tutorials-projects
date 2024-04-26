#include<iostream>
#incluide<iostream>

using namespace std;

iont largestElementIndex(int array[], int size){
    int max = INT_MIN;
    int maxindex=-1;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            maxindex=1;
        }
    }
}
return maxindex;

int main(){
   
   int array[] = {3,4,6,7,1};

   int targetSum=7;
   int size=5;
   int ans = 0;


   for(int i=0; i<size; i++){
      for(int j=i+1; j<size;j++){
        if(array[i]+array[j]==targetSum){
            ans++;
        }
      }
   }
   cout<<ans<<endl;

   // Question 2


    int array[] = {2,3,4,5,2,3,4}
    int size = 7;

    int ans = 0;
  
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size<j++){
        if(array[i]==array[j]){
           array[i]=array[j]=-1;
        }
    }
  }
  for(int i=0; i<size; i++ ){
    if(array[i]>0){
        ans = array[i]
    }
  }
  cout<<ans<<endl;


  // question 3

  int array[] = {2,4,6,7,5,4 };
  int size = 6;
  int indexoflargest = largestElementIndex(array,6)

  array[indexoflargest]=-1;
  int indexofsecondlargest = largestElementIndex(array,6);
   cout<<array[indexofsecondlargest]<<endl;


   // question 6

   int array[]={1,2,3,4,5,6};
   int k=2;
   
   // k can be grater then of n
   k=k%n;
   int ansarray[5];

   // inserting the last k element in ans array
   for(int i=n-k; i<n; i++){
     ansarray[j++]=array[i];
   }

// inserting the first n-k element in the ans array
for(int i=0; i<=k; i++){
  ansarray[j++]=array[i];
}

for(int i=0; i<n; i++){
  cout<<ansarray[i]<<" ";
}
cout<<endl;

// question 7

int n; 
cin>>n;

vector<int>v;

for(inti=0; i<n ;++){
  cin>>v[i];
}

// preprosationg
 const int N = le5 + 10;
 vector<int>freq(N,0);
 for(int i=0; i<n; i++){
  freq[v[i]]++;
 }

cout<<"Enter the quere:";
int q;
cin>>q;

while(q--){
  int queryelement;
  cin>>queryelement;
  cout<<freq[queryelement]<<endl;
}

 
    return 0;

}