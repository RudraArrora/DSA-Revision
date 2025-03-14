#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void parenthesis(string ans,int open,int close){
    // base case 
   if (open==0 && close==0){
    cout<<ans<<endl;
    return;
   }
// recussive case 
  if (open>0){
      parenthesis(ans+'(',open-1,close);
  }
  if (close>open){
      parenthesis(ans+')',open,close-1);
  }
}
int main() {
    string ans;
   int n;
   cin>>n;
   parenthesis("",n,n);
return 0;
}
