/*--------first algorithum to find the how much prime number
 are agjusting in the perticular number series 1-40
    algorithum num -seive of erotosthinis 
*/
//seive of erotosthinis 
#include<iostream>
using namespace std;

int isprimeCount(int n){

    int cnt = 0;
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = true;

    for(int i=2; i<n; i++){

        if(prime[i]){
            cnt++;

            for(int j=2*i; j<n; j=j+i){
                 prime[j] = 0;
            }
        }
    }
    return cnt;
}

int primeNumber(int n){
    int count = 0;

    vector<boot> prime(n+1, true);

    prime[0] = prime[1] = true;

    for(int i=0; i<n; i++){

        if(prime[i]){
            count++
        }

        for(int j=2*i; j<n; j=j+1){
            prime[j]=0;
        }
    }
    return count 0;
}

// create a gcd function
int gcd(int a, int b){
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a
}





int main(){
// convert to binary to decimal
 int n;
 cin>>n;

 int ans = 0;
 int power=1;

 while(n>0){
    int lastdigit = n%10;
    ans+= lastdigit*power;// ans= (digit* power(10,i)+ans)
    power*=2;
    n/=10;
 }
 cout<<ans<<endl;

 // find the modulas even and odd cases 

 int modularExponentiation(int x, int n, int m){
    int res = 1;

    while(n>0){
        if(n&1)// code case 
        {
            res =  (1ll * res * (x)%m)%m;
        }
        x = (1ll* (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
 }

// conversion of decimal to binary 
int n;
cin>>n;

int ans=0;
int power = 1;

while(n>0){
    int peritydigit = n%2;
    ans+= paritydigit*power;
    power*=10;
    n/=2;
}
cout<<ans<<end;

// GCD find the greatest comman fector 
int a,b;
cout<<"Enter the value of a and b:"
cin>>a>>b;

int ans = gcd(a,b);

cout<<"GCD of  "<<a<<"&"<<b<<"is"<<ans<<endl;
}




