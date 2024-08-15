#include <bits/stdc++.h>
using namespace std;
string get(string s, int n, int k)
{
    unordered_map<char, int> m(n, 0);
    for (auto x : s)
    {
        m[x]++;
    }
    if (k == 0)
    {
        int j = 0;
        for (auto v : m)
        {
            if (v.second % 2 == 1)
                j += 1;
        }
        if (n % 2 == 1)
        {
            if (j > 1)
                return "NO";
        }
        else if (j == 0)
            return "YES";
        else if (j > 0)
            return "NO";
    }
    else
    {
        for (auto x : m)
        {
            if (x.second % 2 == 1)
            {
                if (k > 0)
                {
                    x.second -= 1;
                    k -= 1;
                    while (x.second % 2 != 0 && k > 0)
                    {
                        x.second -= 1;
                    }
                }
            }
        }
        if (n % 2 == 1)
        {
            int j = 0;
            for (auto x : m)
            {
                if (x.second % 2 == 1)
                    j += 1;
            }
            if (j > 1)
                return "NO";
            else
                return "YES";
        }
        else
        {
            int j = 0;
            for (auto x : m)
            {

                if (x.second % 2 == 1)
                    j += 1;
            }
            if (j > 0)
                return "NO";
            else
                return "YES";
        }
    }
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << get(s, n, k) << endl;
    }
}