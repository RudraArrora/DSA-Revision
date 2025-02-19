include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int target ;
cin>>target;
for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
        for (int k=j+1;k<n;k++){
        if (a[i]+a[j]+a[k]==target){
            cout<<a[i]<<", "<<a[j]<<" and "<<a[k];
                cout<<endl;
            break;
        }
    }

 }
}
return 0;
}