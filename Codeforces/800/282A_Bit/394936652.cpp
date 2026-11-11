// Codeforces: https://codeforces.com/contest/282/A
// Problem: Bit++
// Submission: https://codeforces.com/contest/282/submission/394936652
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-17T11:59:03.000Z
// Rating: 800
#include <iostream>
#include <string>
int main(){
    int n;
    std::cin>>n;
    int x=0;
    std::string  y;
    for(int i=1;i<=n;i++){
        std::cin>>y;
        if(y[1]=='+'){
            x=(x+1);
        }
        else if(y[1]=='-'){
            x=(x-1);
        }
        
}
    std::cout<<x;
    return 0;
}
