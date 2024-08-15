#include<bits/stdc++.h>
using namespace std;
int get(string question,int m){
    int k=question.length();
    unordered_map<char,int> map;
    int l=0;
    for(int i=0;i<k;i++){
            map[question[i]]++;
        

    }
    int answer=0;
    for(auto x:map){
        if(x.first!='?'){
        if(x.second>=m)
        answer+=m;
        else
        answer+=x.second;
        }
    }
    return answer;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int m;
        cin>>m;
        string n;
        cin>>n;
        cout<<get(n,m)<<endl;
    }
}