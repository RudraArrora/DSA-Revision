#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m];
for (int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
int target;
cin>>target;
  int i=0;
  int j=m-1;
while (i<=n-1 && j<=m-1 && i>=0 && j>=0){
      if (a[i][j]==target){
          cout<<"1";
          break;
      }
      else if (a[i][j]>target){
          j--;
      }
     else{
         i++;
     }
}
if (i==n ||j==m || i<0 || j<0){
    cout<<"0";
}
return 0;
}
