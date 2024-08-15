#include <iostream>
using namespace std;

bool canChooseKNumbers(int n, int k, long long x) {
    // Use long long for large number calculations
    long long min_sum = (static_cast<long long>(k) * (k + 1)) / 2;
    long long max_sum = (static_cast<long long>(n) * (n + 1)) / 2 - (static_cast<long long>(n - k) * (n - k + 1)) / 2;
    
    // Check if x is within the valid range
    if (x < min_sum || x > max_sum) {
        return false;
    }
    
    // Check if the difference between x and min_sum is achievable
    // This is always true in this range so no need to check further
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        
        if (canChooseKNumbers(n, k, x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
