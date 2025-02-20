#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
   long long  int n;
    cin>>n;
    stack<int>s;
   while (n>0){
       int last = n%10;
       if ((9-last)<last){
           s.push(9-last);
       }
       else{
           s.push(last);
       }
       n=n/10;
   }
  while (!s.empty()){
      cout<<s.top();
      s.pop();
  }
return 0;
}
