#include<iostream>
using namespace std;
int getint(string s,int cells){
 int start;
 int end;
 int tank=0;
 bool flag=false;
 for(int i=0;i<cells;i++){
    if(s[i]=='.'&&flag==false){
    start=i;
    end=i;
    flag=true;
    }
    if(s[i]=='.'&&flag==true)
    end++;

    if(s[i]=='#'&&flag==true){

    int cells=end-start;

    if(cells>2&&tank<2)
    tank=cells;
    }
    


 }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int cells;
    cin>>cells;
    string s;
    cin>>s;
    cout<<getint(s,cells);
    }
}