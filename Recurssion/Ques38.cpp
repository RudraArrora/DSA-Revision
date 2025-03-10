#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    // base case 
    if (n==0 || n==1 ){
        return 1;
    }
//recurssive case 
    int fibo1= fibo(n-1);
    int fibo2= fibo(n-2);
    return fibo1+fibo2;
}
int main() {
int n;
cin>>n;
cout<<fibo(n);
return 0;
}
