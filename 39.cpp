#include<bits/stdc++.h>
using namespace std;

void get(long long int n) {
   int  j=n%4;
   int  k=n%6;
   if (n == 4 || n == 6)
       cout << 1 << " " << 1 << endl;
   else if (j%2==1&&k%2 == 1)
       cout << -1 << endl;
   else 
       cout << (n % 6 == 0 ? n / 6 : n / 6 + 1) << " " <<n / 4 << endl;
}

int main() {
   int test;
   cin >> test;
   for (int i = 0; i < test; ++i) {
       long long int n;
       cin >> n;
       get(n);
   }
}