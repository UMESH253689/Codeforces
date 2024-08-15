#include<bits/stdc++.h>
using namespace std;
int get(int a,int b,int c,int d){
    int ope=0;
    while(b!=d){
        if(d>b){
            a=a+1;
            b=b+1;
            ope+=1;
        }
        if(b>d){
            return -1;
        }
    }
    while(a!=c){
        if(a>c){
            a-=1;
            ope+=1;
        }
        if(c>a){
            return -1;
        }
    }
    return ope;

}
int main(){
    int test;
    cin>> test;
    for(int i=0;i<test;i++){
        int a,b,c,d;
        cin>>a,b,c,d;
        cout<<get(a,b,c,d)<<endl;
    }
}