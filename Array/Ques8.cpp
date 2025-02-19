#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
int m;
cin>>n>>m;
int a[n][m];
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        cin>>a[i][j];
    }
}

    for (int j=0;j<n;j++){
       if (j%2==0){
            for (int i=0;i<n;i++){
                cout<<a[i][j]<<",";
            }
       }
       else{
           for (int i=n-1;i>=0;i--){
               cout<<a[i][j]<<",";
           }
       }
    }

	return 0;
}