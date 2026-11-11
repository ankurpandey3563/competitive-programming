// Codeforces: https://codeforces.com/contest/231/A
// Problem: Team
// Submission: https://codeforces.com/contest/231/submission/394524141
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-14T13:48:57.000Z
// Rating: 800
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    bool Petya;
    bool Vasya; 
    bool Tonya;
    int count_loop=1;
    int count=0;
    int P,V,T;
    while(count_loop<=n){
        std::cin>>Petya;
        if(Petya==1){
            P=1;
        }
        else{
            P=0;
        }
        std::cin>>Vasya;
        if( Vasya==1){
            V=1;
        }
        else{
            V=0;
        }
        std::cin>>Tonya;
        if(Tonya==1){
            T=1;
        }
        else{
            T=0;
        }
        
        count_loop++;
        if((P+V+T)==2 || (P+V+T)==3){
            count++;
        }
        
    }
    std::cout<<count;
    return 0;
}
        
