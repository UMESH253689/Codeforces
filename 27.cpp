#include <iostream>
#include <vector>
using namespace std;

int findSmallestK(const vector<int>& a, int n) {
    int totalTwos = 0;
    for (int x : a) {
        if (x == 2) totalTwos++;
    }

    int prefixTwos = 0;
    for (int k = 1; k < n; ++k) {
        if (a[k - 1] == 2) prefixTwos++;

        int suffixTwos = totalTwos - prefixTwos;
        if (prefixTwos == suffixTwos) {
            return k;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findSmallestK(a, n) << endl;
    }
    return 0;
}
