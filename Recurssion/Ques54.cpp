#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_sorted(long long int  *a,long long int  n){
// base case
if (n==1 or n==0){
    return true;
}
if ( a[0]<=a[1] and is_sorted(a+1,n-1)){
    return true;
}
return false;
}
 int  main() {
long long int  n;
cin>>n;
long long int  a[n];
for (long long int  i=0;i<n;i++){
    cin>>a[i];
}
bool ans =is_sorted(a,n);
if (ans == true){
    cout<<"true";
}
else{
    cout<<"false";
}
 return  0;
}