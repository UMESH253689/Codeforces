#include <bits/stdc++.h>
using namespace std;
bool checksorted(vector<int> v, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
            return false;
    }
    return true;
}
int get(vector<int> v, int n)
{
    if (!checksorted(v, n) || n < 1)
        return 0;

    if (checksorted(v, n))
    {
        int maxi = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            maxi = min(maxi, ((v[i]-v[i - 1]) / 2) + 1);
        }
        return maxi;
    }
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
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