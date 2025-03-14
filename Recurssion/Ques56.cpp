#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void moveX(string input,int i,int n,int ans){
    if (i==n){
        for (int i=0;i<ans;i++){
    cout<<"x";
}
        return;
    }
    if (input[i]=='x'){
        moveX(input,i+1,n,ans+1);
    }
    else{
        cout<<input[i];
        moveX(input,i+1,n,ans);
    }
}
int main() {
string input;
cin>>input;
int ans=0;
moveX(input,0,input.length(),ans);
// cout<<ans;

 return 0;
}
