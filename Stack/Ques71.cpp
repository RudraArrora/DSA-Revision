#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void stockSpan(int price[],int span[],int n){
    stack<int>s;
    s.push(0);
    span[0]=1;
    for (int i=1;i<=n-1;i++)
    {
       int  curr = price[i];
        while (!s.empty() && curr>=price[s.top()]){
            s.pop();
        }
        if (!s.empty()){
            span[i]=i-s.top();
        }
        else{
           span[i] = i+1; 
        }
        s.push(i);
    }
}
int main() {
int n;
cin>>n;
int price[n];
for (int i=0;i<n;i++){
    cin>>price[i];
}
int span[n]={0};
stockSpan(price,span,n);
for (int i=0;i<n;i++){
    cout<<span[i]<<" ";
}
cout<<"END";
 return 0;
}
