// Codeforces: https://codeforces.com/contest/71/A
// Problem: Way Too Long Words
// Submission: https://codeforces.com/contest/71/submission/394509556
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-14T11:57:57.000Z
// Rating: 800
#include <iostream>
#include <string>
int main(){
    char x,y;
    std::string str;
    int n;
    std::cin>>n;
    
    int count=1;
    
    while(count<=n){
    std::cin>>str;
    x=str[0];
    y=str[(std::ssize(str))-1];
    if(std::ssize(str)<=10){
        std::cout<<str<<'\n';
        count++;
        continue;
        
    }
    std::cout<<x<<(std::size(str))-2<<y<<'\n';
    count++;
    }
    return 0;
}
