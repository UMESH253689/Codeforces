#include <bits/stdc++.h>
using namespace std;
int get(vector<int> v, int m)
{
    int sum = 0;
    int product = 1;
    int ope = 0;
    for (int i = 0; i < m; i++)
    {
        sum += v[i];
    }
    while (sum < 0)
    {
        for (int i = 0; i < m; i++)
        {
            if (v[i] == -1)
            {
                v[i] = 1;
                break;
            }
        }
        ope += 1;
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += v[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        product *= v[i];
    }
    if (product == 1)
        return ope;
    else
        return ope + 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
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