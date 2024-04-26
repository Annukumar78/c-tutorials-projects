#include<iostream>
using namespace std;

void findFirstLastIndex(string s, int *first, int *last){
  for(int i=0; i<s.size(); i++){
    if(s[i] == ch){
        *first = 1;
        break;
    }
    for(int i=s.size()-1; i>= 0; i--){
        if(s[i] == ch){
            *last=1;
            break;
        }
    }
  }
}

int main(){

    string s = "aaabcad";
    char c = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    findFirstLastIndex(s, ch, pf, pl)
    cout<<*first<<" <<*last<<endl;"
    return 0;
}