#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%3==1||num%3==2)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
}