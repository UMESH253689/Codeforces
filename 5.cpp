#include<iostream>
using namespace std;

bool alreadysorted(int arr[], int num) {
    for(int i = 1; i < num; i++) {
        if(arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

bool find(int arr[], int num) {
    if(alreadysorted(arr, num) == true)
        return true;
    
    if(alreadysorted(arr, num) == false) {
        for(int j=0;j<num;j++){
        for(int i = 1; i < num - 1; i++) {
            if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        }
        if(alreadysorted(arr, num) == true)
            return true;
        else
            return false;
    }
    return false; // Added return statement to handle all control paths
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num; // Input number of elements for each array
        int arr[num]; // Declare array with the input size
        for(int j = 0; j < num; j++) {
            cin >> arr[j]; // Corrected index to j
        }
        if(find(arr, num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
