#include <bits/stdc++.h>
using namespace std;

bool parity(const vector<int> &v, int n) {
    int start_parity = v[0] % 2;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 1 && v[i] % 2 == start_parity)
            return false;
        if (i % 2 == 0 && v[i] % 2 != start_parity)
            return false;
    }
    return true;
}

int get(vector<int> &v, int n) {
    int ope = 0;
    for(int i=0;i<n;i++){
        if(v[i]%2==1)
        v[i]=1;
        else
        v[i]=0;
    }
    while (!parity(v, n)) {
        bool changed = false;
        for (int i = 1; i < n; i++) {
            if (v[i] % 2 == 0 && v[i - 1] % 2 == 0) {
                v[i - 1] = v[i - 1] * v[i];
                v.erase(v.begin() + i);
                n--; // Decrease the size of the array
                ope++;
                changed = true;
                break;
            }
            if (v[i] % 2 == 1 && v[i - 1] % 2 == 1) {
                v[i - 1] = v[i - 1] * v[i];
                v.erase(v.begin() + i);
                n--; // Decrease the size of the array
                ope++;
                changed = true;
                break;
            }
        }
        // If no change was made, break to avoid infinite loop
        if (!changed) break;
    }
    return ope;
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        cout << get(v, n) << endl;
    }
}
