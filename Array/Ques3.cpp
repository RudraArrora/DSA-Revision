#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int target;
cin>>target;
for (int i=0;i<n;i++){
    cin>>a[i];
}
int ans1;
int ans2;
for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
        if (a[i]+a[j]==target){
            ans1 =a[i];
            ans2=a[j];
              if (ans1>ans2){
        cout<<ans2<<" and "<<ans1<<endl;
    }
    else{
        cout<<ans1<<" and "<<ans2<<endl;
    }
            break;
        }
    }
  
}

  return 0; 
}
