#include<cstring>
#include <iostream>
#include<string.h>
using namespace std;
string table[10]={" ",".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","xyz"};
string search[11]={
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
void key(string s,char out[],int i,int j){
    // base case 
    if (s[i]=='\0'){
        out[j]='\0';
        string g = out;
        // cout<<g<<endl;
      for (int k=0;k<11;k++){
          if(search[k].find(g) != string::npos){
              cout<<search[k]<<endl;
          }
      }
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