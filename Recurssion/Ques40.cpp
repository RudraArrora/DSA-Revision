#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void tower(int n,char src,char  help,char  dest){
    if (n==0){
        return;
    }
    // recurssive case 
    tower(n-1,src,dest,help);
    cout<<"move"<<n<<"from"<<src<<"to"<<dest<<endl;
    tower(n-1,help,src,dest);
}
int main() {
int n;
cin>>n;
tower(n,'A','C','B');
return 0;
}
