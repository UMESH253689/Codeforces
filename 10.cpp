#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get(vector<vector<char>> v) {
    int ans = 0;
    
    for (int d = 0; d < 5; d++) {
        for (int j = d; j < 10 - d; j++) {
            if (v[d][j] == 'X') 
            ans += d + 1;
        }
        for (int j = d; j < 10 - d; j++) {
            if (v[9 - d][j] == 'X') 
            ans += d + 1;
        }
        for (int i = d + 1; i < 9 - d; i++) {
            if (v[i][d] == 'X') 
            ans += d + 1;
        }
        for (int i = d + 1; i < 9 - d; i++) {
            if (v[i][9 - d] == 'X') 
            ans += d + 1;
        }
    }
    
    return ans;
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        vector<vector<char>> v(10, vector<char>(10));
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                cin >> v[j][k];
            }
        }
        cout << get(v) << endl;
    }
    return 0;
}

