#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]<=90 && s[i]>=65){
            cout<<endl;
            cout<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
return 0;
}