#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void stockSpan(int price[],int n,int span[]){
    stack<int>s;
    s.push (0);
    span[0]=1;
    for (int i=1;i<=n-1;i++){
        int curr=price[i];
        while (!s.empty() && curr>=price[s.top()]){
            s.pop();
        }
        if (!s.empty()){
            span[i] = i - s.top();
        }
        else{
            i=i+1;
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
int span[n];
stockSpan(price,n,span);
for (int i=0;i<n;i++){
    cout<<span[i]<<" ";
}
 return 0;
}
