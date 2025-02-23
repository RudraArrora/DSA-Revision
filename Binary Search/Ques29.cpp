#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
 int  main() {
    long long int  t;
    cin>>t;
    while (t--){
 long long int  n;
cin>>n;
long long int  k;
cin>>k;
bool ans=false;
long long int  mans;
long long int  s=0;
long long int  e=n;
while (s<=e){
    long long int  mid= (s+e)/2;
    if (pow(mid,k)<=n){
      mans=mid;
      s=mid+1;
    }
    else{
        e=mid-1;
    }
}
cout<<mans<<endl;
    }

    return 0;
}