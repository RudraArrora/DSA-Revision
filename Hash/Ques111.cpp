#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkSUM(int a[],int n){
    unordered_set<int>s;
    int pre=0;
    for (int i=0;i<n;i++)
    { 
     pre=pre+a[i];
     if (pre==0 && s.find(pre)!=s.end()){
         return true;
     }
     s.insert(pre);
    }
    return false;
}
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
if (checkSUM(a,n)){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}
