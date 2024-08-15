#include <bits/stdc++.h>
using namespace std;

bool paritycheck(const vector<int>& v, int n) {
    int a = v[0];
    bool b = true;
    if (a % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 1) {
                b = false;
                return b;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                b = false;
                return b;
            }
        }
    }
    return b;
}
void function(vector<int> v,vector<int>&operation,int n,int c){
     int ope = 0;

        if (paritycheck(v, n)) 
        operation.push_back(0);
    
    while (!paritycheck(v, n)) {
  

        for (int i = 0; i < n; i++) {
            if (i != c && v[i] % 2 == 0) {
                if (v[c] > v[i]) {
                    v[i] = v[i] + v[c];
                    ope += 1;
                    break;
                } else {
                    v[c] = v[c] + v[i];
                    ope += 1;
                    break;
                }
            }
        }
    }
    operation.push_back(ope);
}
int get(vector<int>& v, int n) {
    vector<int> h=v;
    vector<int > operation;
    for(int i=0;i<n;i++){
        if(v[i]%2==1){
            function(h,operation,n,i);
        }
    }
 
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
