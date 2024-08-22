#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        string s;
        cin >> s;
        vector<int> a;
        vector<int> b;
        while (a.size() != b.size())
        {
            for (int i = 1; i < s.length(); ++i)
            {
                if (s.substr(i - 1, i) == "ab")
                    a.push_back(i - 1);
                else if (s.substr(i - 1, i) == "ba")
                    b.push_back(i - 1);
            }
            if (a.size() == b.size())
                cout << s << endl;
            else if (a.size() > b.size())
            {
                for (auto x : a)
                {
                    s[x] = 'b';
                }
            }
            else if (a.size() < b.size())
            {
                for (auto x : b)
                {
                    s[x] = 'a';
                }
            }
        }
        cout<<s<<endl;
    }
}