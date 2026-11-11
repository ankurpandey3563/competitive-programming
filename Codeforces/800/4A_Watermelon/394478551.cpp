// Codeforces: https://codeforces.com/contest/4/A
// Problem: Watermelon
// Submission: https://codeforces.com/contest/4/submission/394478551
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-14T06:45:45.000Z
// Rating: 800
#include <iostream>
int main(){
    int weight;
  
   std::cin>>weight;
   if(weight%2==0 && weight!=2){
    std::cout<<"YES";
   }
   else{
    std::cout<<"NO";
   }
   return 0;

}
