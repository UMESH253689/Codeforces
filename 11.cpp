#include <iostream>
#include <cstdlib>
using namespace std;

int get(int arr[], int n) {
    if (n <= 0) return 0;
    int mini = abs(arr[0]);
    for (int i = 1; i < n; i++) {
        mini = min(mini, abs(arr[i]));
    }
    return mini;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << get(arr, n) << endl;
    return 0;
}
