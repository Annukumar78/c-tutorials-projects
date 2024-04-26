#include<iostream>
using namespace std;

string f(string &s, int idx, int n){
  if(idx == n){
    return " ";
  }
  string current = " ";
  current += s[idx];
  return ((s[idx] == 'a') ? " " : current) + f(s, idx+1, n)
}

int main(){
 
   string s = "abcdeg";
   int n = 6;
   cout<<f(6, 0, n);
 return 0;
}