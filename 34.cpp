#include<bits/stdc++.h>
using namespace std;
int get(vector<int> v,int n,int k){
    int ope=0;
    int i;
    for( i=1;i<n;++i){
        if(abs(v[i]-v[i-1])>k){
        ope=n-i;
        }
        break;
    }
    for(int j=i+1;j<n;j++){
        if(abs(v[j]-v[j-1])<=k)
        ope-=1;
    }

    return ope;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;++i){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int j=0;j<n;++j){
            cin>>v[i];
        }
        cout<<get(v,n,k)<<endl;
    }
}