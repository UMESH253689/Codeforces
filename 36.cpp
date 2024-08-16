#include<bits/stdc++.h>
using namespace std;
bool che(int n,vector<int> v){
    for(int i=1;i<n;++i){
        if(v[i]<v[i-1])
        return false;
    }
    return true;
}
int get(int n, vector<int> v) {
    if(che(n,v))
    return 0;
    map<int, int> b;
    for(int i = 0; i < n; ++i) {
        b[abs((i+1) - v[i])]++;
    }
    int a = INT_MIN, s;
    for(auto x : b) {
        if(x.second > a) {
            a = x.second;
            s = x.first;
        }
    }
    return s;
}

int main() {
    int test;
    cin>>test;
    for(int i = 0; i < test; ++i) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int j = 0; j < n; ++j) {
            cin>>v[j];
        }
        cout<<get(n, v)<<endl;
    }
}
