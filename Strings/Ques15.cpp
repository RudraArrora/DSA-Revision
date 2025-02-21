#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    for (int i=0;i<s.length();i++){
        if (i+1==s.length()){
            cout<<s[i];
            break;
        }
        cout<<s[i]<<int (s[i+1])- int (s[i]);
    }
return 0;
}
