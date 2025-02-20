#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
int b[m];
for (int j=0;j<m;j++){
    cin>>b[j];
}
int sum1=0;
int p1=1;
int sum2=0;
int p2=1;
for (int i=n-1;i>=0;i--){
      sum1=sum1+(a[i]*p1);
      p1=p1*10;
}
for (int i=m-1;i>=0;i--){
      sum2=sum2+(b[i]*p2);
      p2=p2*10;
}
int ans= sum1+sum2;
cout<<ans;
return 0;
}
