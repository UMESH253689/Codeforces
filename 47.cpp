#include<bits/stdc++.h>
using namespace std;
string collect(string s){
    int zero=0;
    int one=0;
    for(int i=0;i<s.length();++i){
             if(s[i]=='0')
             zero+=1;
             else
             one+=1;
    }
    if(min(zero,one)%2==0)
    return "NET";
    else
    return "DA";
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;++i){
        string s;
        cin>>s;
        cout<<collect(s)<<endl;
    }
}