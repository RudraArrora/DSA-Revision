#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool possible (int *a,int n,int m,int min){
    int student=1;
    int currPages=0;
    for (int i=0;i<n;i++){
     if (a[i]+currPages>min){
         currPages=a[i];
         student++;
         if (student>m){
             return false;
         }
     }
     else{
         currPages=currPages+a[i];
     }
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while (t--){
        int n,m;
    cin>>n>>m;
    int a[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    int s= a[n-1];
    int e = sum;
    int finalans;
    while(s<=e){
        int mid=(s+e)/2;
        if (possible(a,n,m,mid)){
              finalans=mid;
              e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<finalans;
    }
    
return 0;
}
