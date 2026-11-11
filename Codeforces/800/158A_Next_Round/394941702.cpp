// Codeforces: https://codeforces.com/contest/158/A
// Problem: Next Round
// Submission: https://codeforces.com/contest/158/submission/394941702
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-17T12:32:16.000Z
// Rating: 800
#include <iostream>
int main(){
   int n;
   int k;
   int count=0;
   std::cin>>n>>k;
   
   int s[n];
   for(int i=0;i<n;i++){
       std::cin>>s[i];
   }
   for(int j=0;j<n;j++){
       if(s[j]>0 && s[j]>=s[k-1]){
           count++;
       }
   }
   std::cout<<count;
   return 0;
}
