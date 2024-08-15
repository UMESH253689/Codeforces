#include <bits/stdc++.h>
using namespace std;
bool sameelement(vector<int> &v, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
            return false;
    }
    return true;
}
bool beautiful(vector<int> &v, int n)
{
    int sum = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] == sum)
            return false;

        sum += v[i];
    }
    return true;
}
void get(vector<int> &v, int n)
{
    if (sameelement(v, n))
    {
        cout << "NO";
        return;
    }
    else if (beautiful(v, n))
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
    }
    else
    {
        while (!sameelement(v, n))
        {
            int sum = v[0];
            for (int i = 1; i < n; i++)
            {
                if (v[i] == sum)
                    v[i] += sum;

                sum += v[i];
            }
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
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
        get(v, n);
    }
}