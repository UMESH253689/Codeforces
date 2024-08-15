#include<iostream>
using namespace std;
bool find(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        return true;
    }
    return false;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int  n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(find(arr,n,k))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}