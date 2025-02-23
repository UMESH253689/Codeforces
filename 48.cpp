#include<bits/stdc++.h>
using namespace std;
int get(int n){
    if(n==1)
    return 0;
    int even=0;
    int odd=0;
    while(n%2==0){
        n=n/2;
        even+=1;
    }
    while(n%3==0){
        n=n/3;
        odd+=1;
    }
    if(even>odd)
    return -1;
    else
    return (odd-even)+odd;

}
int main(){
    int test;
     cin>>test;
     for(int i=0;i<test;++i){
        int n;
        cin>>n;
        cout<<get(n)<<endl;
     }
}