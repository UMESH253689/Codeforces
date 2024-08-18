#include <bits/stdc++.h>
using namespace std;
int get(int n, vector<int> v)
{
    if (v.size() == 1)
        return 0;
    int a = INT_MIN;
    int b = INT_MAX;
    int u;
    for (int i = 0; i < n; ++i)
    {
        if (a < v[i])
        {
            a = v[i];
            u = i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        b = min(b, v[i]);
    }
    if (v[0] == b)
        return a - b;
    else
    {
        if (u == n - 1)
            return a - v[u - 1];
        else
        {
            int k = min(v[u - 1], v[u + 1]);
            return a - k;
        }
    }
} 
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        int n;
        vector<int> v(n);
        for (int j = 0; j < n; ++j)
            cin >> v[j];

        cout << get(n, v) << endl;
    }
}