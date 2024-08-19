#include <bits/stdc++.h>
using namespace std;

int get(map<int, int> m, int n)
{
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n;
        int maxi = INT_MIN;
        map<int, int> m; 
        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            m[x]++;
            maxi = max(maxi, m[x]);
        }

        if (maxi == n)
        {
            cout << 0 << endl;
        }
        else
        {
            int ope = 1;
            while (maxi <= n)
            {
                if (maxi + maxi >= n)
                {
                    ope += (n - maxi);
                    break;
                }
                ope += maxi;
                maxi = 2 * maxi;
                ope += 1;
            }
             cout <<ope<< endl;
        }
    }
    return 0;
}
