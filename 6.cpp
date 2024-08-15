#include <iostream>
#include <algorithm>
using namespace std;



bool find(int arr[], int number) {
   int e1=arr[0];
   int c1=1;
   int e2=-1;
   int c2=0;
   for(int i=1;i<number;i++){
    if(arr[i]==e1)
    c1++;
    else if(e2!=-1){
         e2=arr[i];
         }
    else if(e2==arr[i])
         c2++;
   }
   if(c1==0||c1==number)
   return true;
   else
   if(number%2==0&&c1==number/2&&c2==number/2)
   return true;
   else
   if((number%2==1&&c1==number/2&&c2==(number/2)+1)||(number%2==1&&c1==(number/2)+1&&c2==(number/2)))
   return true;
   else
   return false;
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int number;
        cin >> number;
        int arr[number]; // Allocate memory dynamically
        for (int j = 0; j < number; j++) {
            cin >> arr[j];
        }
        if(find(arr,number))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
