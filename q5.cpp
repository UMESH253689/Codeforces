#include <iostream>
#include <vector>
using namespace std;
int get(vector<int> v)
{
    int sum = 6;
    int ope = 0;
    while (sum != 0)
    {
        sum = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] != 0 || v[i + 1] != 0)
            {
                if (v[i] == 0)
                {
                    v[i + 1] = v[i + 1] / 3;
                    ope += 1;
                }
                else if (v[i + 1] == 0)
                {
                    v[i] = v[i] / 3;
                    ope += 1;
                }
                else
                {
                    if ((v[i] / 3) <= (v[i + 1] / 3))
                    {
                        v[i] = v[i] / 3;
                        v[i + 1] = 3 * v[i + 1];
                        ope += 1;
                    }
                    else
                    {
                        v[i] = 3 * v[i];
                        v[i + 1] = v[i + 1] / 3;
                        ope += 1;
                    }
                }
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            sum = sum + v[i];
        }
    }
    return ope;
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v;
        for (int j = a; j <= b; j++)
        {
            v.push_back(j);
        }
        cout << get(v) << endl;
    }
    return 0;
}
