#include<iostream>
using namespace std;

int main (){
    int n,m;
    cin>>n;
    cin>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //------------------------------//

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

//--------------------------------//
   int n;
   cin>>n;

   for(int i=1; i<=n; i++){
    for(int j = 1; j<=i ; j++){
        cout<<"*";
    }
    cout<<endl;
   }


//-------------------------------//
   for(int i= 1; i<=n; i++){
    for(int j= 1; j<=n; j++){
        cout<<j;
    }
    for(int j =1; j<=(i-1); j++){
        cout<<j;
    }

    cout<<endl;
   }
   //-----------------------------------//

   int n,m;
   cin>>n>>m;

   for(int i=1; i<=n; i++){
    for(int j= 1; j<=n; j++){
        if((i+j)%2==0){
            cout<<"1";

        }
        else{
            cout<<"2";
        }
    }
   }
   //----------------------------//

   int n;
    cin>>n;

    for(int i=1; i<=n; j++){
        for(int j=1; j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1; j<=i j++){
            cout<<j;
            
        }
        for(int j=1; j>=1; j--){
            cout<<j;

        }
        cout<<endl;
    }
    return 0; 
}