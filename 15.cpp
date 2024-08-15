#include<bits/stdc++.h>
using namespace std;
void get(vector<int> v,int n){
    if(n<2)
    cout<<"NO"<<endl;
    else if(n>=2){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        if(sum%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        get(v,n);
    }
}