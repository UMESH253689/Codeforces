#include <bits/stdc++.h>>
using namespace std;
void get(int a, int b, int c)
{
    if (a > b)
    {
        cout << "First" << endl;
    }
    if (b > a)
    {
        cout << "Second" << endl;
    }
    if (a == b)
    {
        if (c % 2 == 1)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        get(a, b, c);
    }
}