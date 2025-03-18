#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void all_indices(int *a,int n,int i,int target){
    if (i==n){
        return;
    }
    if (a[i]==target){
      cout<<i<<" ";
    }
    all_indices(a,n,i+1,target);
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
all_indices(a,n,0,key);
 return  0;
}