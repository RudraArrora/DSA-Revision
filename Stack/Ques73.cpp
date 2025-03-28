#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int>&s1,stack<int>&s2,int n){
              for (int i=0;i<n;i++){
                  s2.push(s1.top());
                  s1.pop();
              }
}
void reverse(stack<int>&s1){
    stack<int>s2;
    int n= s1.size();
    for (int i=0;i<s1.size();i++){
        int x = s1.top();
         s1.pop();
         transfer(s1,s2,n-i-1);
         s1.push(x);
         transfer(s2,s1,n-i-1);
    }
}
int main() {
int n;
cin>>n;
stack<int>s1;
for (int i=0;i<n;i++){
    int num;
    cin>>num;
    s1.push(num);
}
reverse(s1);
while (!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
}
 return 0;
}


