#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void dupplicate(string s,int i){
// base case
cout<<s[i];
if (s[i]==s[i+1]){
    cout<<"*";
}
if (i==(s.length()-1)){
    return;
}

dupplicate(s,i+1);
}
int main() {
string s;
cin>>s;
dupplicate(s,0);

return 0;
}
