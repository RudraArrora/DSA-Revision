#include<cstring>
#include <iostream>
#include<string.h>
using namespace std;
string table[10]={" ",".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void key(string s,char out[],int i,int j){
    // base case 
    if (s[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    // recurssive case
    int digit=s[i]-'0';
    for (int k=0;table[digit][k]!=0;k++){
        out[j]=table[digit][k];
        key(s,out,i+1,j+1);
    }
}
int main(){
    string s;
    cin>>s;
    char out[100];
    key(s,out,0,0);
    return 0;
}