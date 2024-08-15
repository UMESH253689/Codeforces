#include <bits/stdc++.h>
using namespace std;
int get(vector<int> v, int m)
{
    int x=0;
    int sum=0;
    for(int i=0;i<m;i++){
        if(v[i]==0){
            sum+=1;
        }
        else{
            x=max(x,sum);
            sum=0;
        }
    }
    x=max(x,sum);
    return x;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)3
    {
        int m;
        cin >> m;
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            cin >> v[i];
        }
        cout << get(v, m) << endl;
    }
}