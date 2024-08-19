#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        int a, b;
        cin >> a >> b;
        int m = 0;
        while (m < b)
        {
            m += 1;
            if (abs(a) % 2 == 1)
                a += m;
            else if (a % 2 == 0)
                a -= m;
        }
        cout<<a<<endl;
    }
}