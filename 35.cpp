#include <bits/stdc++.h>
using namespace std;
int get(string s,int n){
    int mini=INT_MIN;
    int k=0;
    for(int i=0;i<n;++i){
        if(s[i]=='>')
        k+=1;
        else{
            mini=max(mini,k);
            k=0;
        }
    }
    mini=max(mini,k);
    
    int a=INT_MIN;
    int b=0;
    for(int i=0;i<n;++i){
        if(s[i]=='<')
        b+=1;
        else{
            a=max(a,b);
            b=0;
        }
    }
    a=max(a,b);
    return max(mini+1,a+1);
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << get(s, n) << endl;
    }
}