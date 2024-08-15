#include<bits/stdc++.h>
using namespace std;
int get(int n){
    if(n<=10)
    return n;   //5000 9+10+

    int sum=10;
    if(n>100)
    sum+=(100/10)-1;
    else if(n>10&&n<=100)
    sum+=(n/10)-1;

    if(n>1000)
    sum+=(1000/100)-1;
    else if(n>100&&n<=1000)
    sum+=(n/100)-1;

    if(n>10000)
    sum+=(10000/1000)-1;
    else if(n>1000&&n<=10000)
    sum+=(n/1000)-1;

    if(n>100000)
    sum+=(100000/10000)-1;
    else if(n>10000&&n<=100000)
    sum+=(n/10000)-1;

    if(n>1000000)
    sum+=(1000000/100000)-1;
    else if(n>100000&&n<=1000000)
    sum+=(n/100000)-1;
    
    if(n>10000000)
    sum+=(10000000/1000000)-1;
    else if(n>1000000&&n<=10000000)
    sum+=(n/1000000)-1;

    if(n>100000000)
    sum+=(100000000/10000000)-1;
    else  if(n>10000000&&n<=100000000)
    sum+=(n/10000000)-1;

    if(n>1000000000)
    sum+=(1000000000/100000000)-1;
    else if(n>100000000&&n<=1000000000)
    sum+=(n/100000000)-1;


     return sum;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        cout<<get(n)<<endl;
    }
}