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
   int s=0;
   int e= n-1;
   while (s<=e){
       int mid= (s+e)/2;
       if (a[mid]>a[mid+1] && mid+1<=e){
           cout<<mid;
           break;
       }
       if (a[mid]<a[mid-1] && s>=0){
           cout<<mid-1;
           break;
       }

       if (a[s]>a[mid]){
           e=mid-1;
       }
       else{
           s=mid+1;
       }

   }
return 0;
}
