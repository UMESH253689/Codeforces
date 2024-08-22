#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    for (int j = 0; j < test; ++j) {
        int n;
        cin >> n;
        vector<int> v;

        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << -1 << endl;
        else if (n == 3) {
            v.push_back(3);
            v.push_back(1);
            v.push_back(2);
        } else {
            if (n % 2 == 1) {
                for (int i = n; i >= (n / 2) + 2; --i) {
                    v.push_back(i);
                }
                for (int i = 1; i <= n / 2 + 1; ++i) {
                    v.push_back(i);
                }
            } else {
                for (int i = n; i >= (n / 2) + 1; --i) {
                    v.push_back(i);
                }
                for (int i = 1; i <= n / 2; ++i) {
                    v.push_back(i);
                }
            }
        }

        // Output the vector if it was filled
        if (!v.empty()) {
            for (int i : v) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
