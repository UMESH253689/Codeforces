#include<iostream>
#include<algorithm>
using namespace std;
int get(int arr[],int n){
      int ans=0;
       for(int i=0;i<n-1;i++)
       ans+=arr[i];

       return -ans;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int arr[n-1];
        for(int j=0;j<n-1;j++)
        {
            cin>>arr[j];
        }
        cout<<get(arr,n)<<endl;
    }
}