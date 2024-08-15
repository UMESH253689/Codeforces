#include<iostream>
using namespace std;
bool findsort(int arr[],int n){
    for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
    return false;
    }
    }
    return true;
}
bool find(int arr[],int k,int n){
      if(k==1)
      return findsort(arr,n);

      if(k>=2){
        if(findsort(arr,n))
        return true;
        else{
           int i, key, j;
           for (i = 1; i < n; i++) {
           key = arr[i];
           j = i - 1;

           while (j >= 0  && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
           return findsort(arr,n);
        }
      }
}
int main(){
    int num;
    cin>>num;
    cout<<endl;
    for(int i=0;i<num;i++){
        int n,k;
        cin>>n;
        cin>>k;
        cout<<endl;
        int arr[n];
        for(int i=0;i<n;i++){
           cin>>arr[i];
           cout<<" ";
        }
        if(k==0)
        cout<<"NO"<<endl;
        bool b=find(arr,k,n);
        if(b==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}