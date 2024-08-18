#include <bits/stdc++.h>
using namespace std;

bool isperfect(int n, vector<int> &v) {
    for (int i = 1; i < n; ++i) {
        if (v[i] % v[i - 1] == 0)
            return false;
    }
    return true;
}

void get(int n, vector<int> &v) {  // changed return type to void as there's no return value
    if (isperfect(n, v)) {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    } else {
        while (!isperfect(n, v)) {
            for (int i = 1; i < n; ++i) {
                if (v[i] % v[i - 1] == 0)
                {
                    if(v[i-1]==1)
                    v[i-1]+=1;
                    else
                    v[i] += 1;
                }
            }
            if (isperfect(n, v)) {
                for (auto x : v)
                    cout << x << " ";
                cout << endl;
                break;
            }
        }
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;  // n value was missing input
        vector<int> v(n);  // fixed vector initialization
        for (int j = 0; j < n; ++j) {
            cin >> v[j];
        }
        get(n, v);
    }
    return 0;
}
