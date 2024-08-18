#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> v, int n)
{
    for (int i = 1; i < n; ++i)
    {
        if (v[i] < v[i - 1])
            return false;
    }
    return true;
}
bool equality(vector<int> v,int n){
     for (int i = 1; i < n; ++i)
    {
        if (v[i]!= v[i - 1])
            return false;
    }
    return true;
}
int get(vector<int> v, int n)
{
    if (check(v, n))
        return 0;
    
    
    int ope=0;
    while(!check(v,n)){

    for(int i=1;i<n;++i){
        if(v[i]<v[i-1]){
            while(v[i-1]<v[i]){
                v[i-1]=v[i-1]/2;
                ope+=1;
                if(v[i-1]==0)
                break;
            }
        }
    }
    if(equality(v,n))
    return -1;
    }
    return ope;
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        cout << get(v, n) << endl;
    }
}