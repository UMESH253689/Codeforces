#include<iostream>
using namespace std;
int get(string x,string s,int n,int m){
    int operation=0;
    bool correct=true;;
    while(n<m){
        x=x+x;
        n=n+n;
        operation+=1;
    }

  for(int i=0;i<m;i++){
        if(x.find(s)!=string::npos){
        return operation;
        break;
        }
        else
        {
            x=x+x;
            n=n+n;
            operation=operation+1;
        }
  }
    return -1;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        cout<<get(x,s,n,m)<<endl;
    }
}