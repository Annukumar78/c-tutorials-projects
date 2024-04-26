#include<iostresam>
using namespace std;

void swapZerosTAnd(vector<int> &v){

    int n = v.size();

    for(int i=n-1; i>=0; i--){
        int j = 0;
        bool flag = false;

        while(j!=i){
            if(v[j]==0 && v[j+1]! = 0){
                swap(v[j], v[j+1]);
                flag=true;
            }
            j++;
        }
        if(!flag) break;
    }
}

//---------------second question-------------------------->
void selectionSort( char fruit[][60], int n){
    for(int i=0; i<n; i++){
        // finding min element 
        int min_index = i;
        for(int j=i+1; j<n; j++){
        if(strcmp(fruit[min_index], fruit[j]) > 0){
            min_index = j;
        }

        }
    }
}

int main(){

    char fruit[] [60] = {"papaya","line","watermelon","apple","mango","kiwi"};

    int n = sizeof(fruit)/sizeof(fruit[0]);

    selectioSort(fruit, n);

    for(int i=0; i<n; i++){
        cout<<fruit[i]<<" ";
    }cout<<endl;
    return 0;
}

int main(){

int n;
 cin>>

 vector<int>v(n);

 for(int i=0; i<n; i++){
    cin>>v[i];
 }
 swapZerosTAnd(v);

 for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
 }

    return 0;
}