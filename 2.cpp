#include<iostream>
using namespace std;
int find(int arr[],int pumps,int x){
    if(pumps>=x-1)
    return 1;
    int a=arr[0];
    int i;
    while(a<=x){
        for(i=1;i<pumps;i++){
            if((arr[i]-arr[i-1])>a)
            break;
        }
        if(i==pumps)
        return a;

        a=a+1;
    }
}
int main(){
    int inputs;
    cin>>inputs;
    for(int i=0;i<inputs;i++){
          int pumps,x;
          cin>>pumps>>x;
          int arr[pumps];
          for(int i=0;i<pumps;i++){
            cin>>arr[i];
          }
          cout<<find(arr,pumps,x);
    }
}