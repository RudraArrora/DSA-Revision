#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int j,int n){
    // base cases 
    if (n==1){
        return;
    }
    if (j==n-1){
        return bubble(a,0,n-1);
    }
    if (a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
 bubble(a,j+1,n);
}
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
bubble(a,0,n);
for (int i=0;i<n;i++){
    cout<<a[i];
}
return 0;
}
