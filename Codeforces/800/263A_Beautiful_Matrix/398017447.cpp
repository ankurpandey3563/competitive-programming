// Codeforces: https://codeforces.com/contest/263/A
// Problem: Beautiful Matrix
// Submission: https://codeforces.com/contest/263/submission/398017447
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-11-10T10:07:18.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[j];
            if(v[j]==1){
                cout<<abs(j-2)+abs(i-2);
            }
        }
        v.clear();
    }
    return 0;
}
