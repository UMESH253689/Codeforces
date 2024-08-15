#include<iostream>
using namespace std;
int get(long long int n){
    for(auto i=1;;++i){
        if(n%i!=0)
        return i-1;
    }
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;++i){
        long long int n;
        cin>>n;
        cout<<get(n)<<endl;
    }
}