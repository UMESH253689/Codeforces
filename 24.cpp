#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
string get(int n,int k){
    
      if(k==1)
      return "YES";
      else
      if(n%k==0)
      return "YES";
      else
      if(n%2==0)
      return "YES";
      else
      if(n%(2+k)==0)
      return "YES";
      else
      if(n%2==1&&k%2==1)
      return "YES";
      else
      return "NO" ;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n,k;
        cin>>n>>k;
        cout<<get(n,k)<<endl;
    }
}