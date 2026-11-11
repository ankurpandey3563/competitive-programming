// Codeforces: https://codeforces.com/contest/112/A
// Problem: Petya and Strings
// Submission: https://codeforces.com/contest/112/submission/398020044
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-11-10T10:39:31.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if((int)s1[i]<=90){
            s1[i]=s1[i]+32;
        }
    }
    for(int i=0;i<s2.size();i++){
        if((int)s2[i]<=90){
            s2[i]=s2[i]+32;
        }
    }
    if(s1>s2){
        cout<<1;
    }
    else if(s1<s2){
        cout<<-1;
    }
    else{
        cout<<0;
    }
    return 0;
}
