#include<iostream>
using namespace std;

int main(){

    int arr[n] = { 1, 2, 3, 4, 5};

    cout<<sizeof(array)<<endl;

    for(int i = 0; i<=n-1; i++){
        cout<<arr[n]<<endl;

    }

    // for each loop

    for(int element: array){
        cout<<element<<endl;
    }

    // while loop

    while(index<size){
        cout<<arrray(index)<<endl;
    }

    char vowels[5];

    for(int i = 0; i<5; i++){
        cout<<vowels(i)<<endl;
    }

    // Sum of the array 

    int array1[] = {2,34,43,67};
    int size = sizeof(array)/sizeof(array[0]);

    int sum = 0;

    for(int i=0; i<size; i++){
        sum+=array[i];
    }
    cout<<sum<<endl;

    // find the maximum

    int array[] = {12,34,45,5, 55};

    int max = array[0];
    for(int i=1; i<5; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout<<max<<endl;

    // Linear search 

    int array[] = {12,34,45,67,30};
    int key= 34;
    int ans = -1;

    for(int i = 0; i<5; i++){
        if(array[i]== key){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}