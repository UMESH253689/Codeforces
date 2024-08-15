#include<bits/stdc++.h>
using namespace std;
int get(string s,int n,int a){
    if(n==0)
    return 0;
    
    if(n==a)
    return 0;

    if(n-1==a)
    return 1;

    if(s[n-1]=='1'&&n>a){
        if(s[a]=='0')        //6  101010  a=0,n=6 a=1,n=5 a=2 n=4 
                             // 7 1010110 a=0,n=7 a=1,n=6 a=2 n=5 

        return get(s,n-1,a+1);
        return n-a;
    }
    if(s[n-1]=='0'&&n>a){
        if(s[a]=='1')
        return get(s,n-1,a+1);
        return n-a;
    }
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<get(s,n,0)<<endl;
    }
}