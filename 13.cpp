#include <bits/stdc++.h>
using namespace std;
void complete(vector<int> a, int n)
{
     sort(a.begin(), a.end());
     if(a.back()==a[0])
     cout<<"-1\n";

     int it=0;
     while(a[it]==a[0]) it++;
     cout<<it<<" "<<n-it<<endl;
     for(int i=0;i<it;i++){
        cout<<a[i]<<" ";
     }
     for(int i=it;i<n;i++){
        cout<<a[i]<<" ";
     }
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        complete(v, n);
    }
}