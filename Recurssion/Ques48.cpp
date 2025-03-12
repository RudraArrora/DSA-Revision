
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int last(int a[],int i,int n,int key,int ans){
// base case 
    if (i==n){
          return ans;
    }
    if (a[i]==key){
        return last(a,i+1,n,key,i);
    }
    else{
        return last(a,i+1,n,key,ans);
    }
}
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<last(a,0,n,key,-1);
    return 0;
}