#include <bits/stdc++.h>
using namespace std;
string get(string question, string answer)
{
    vector<pair<char, bool>> v;
    for (auto x : answer)
    {
        v.push_back({x, false});
    }
    int i;
    int j = 0;
    for (i = question.size() - 1; i >= 0 && j < v.size(); --i)
    {
        if (question[i] == v[j].first)
        {
            v[j].second = true;
            j += 1;
            break;
        }
    }
    for (; i < question.size() && j < v.size(); ++i)
    {
        if (question[i] == v[j].first)
        {
            v[j].second = true;
            j += 1;
        }
    }
    for (auto x : v)
    {
        if (x.second == false)
            return "NO";
    }
    int k = i;
    for (auto x : v)
    {
        for (int l = k; i < question.size(); ++i)
        {
            if (x.first == question[l])
                return "NO";
        }
    }
    return "YES";
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        string question, answer;
        cin >> question >> answer;
        cout << get(question, answer) << endl;
    }
}