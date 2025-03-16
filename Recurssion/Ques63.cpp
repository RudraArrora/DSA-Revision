#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void stringGenerator(char*input,char*output,int i,int j){
    if (input[i]=='\0'){
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    // reecurssive case  includeing the one char 
    int digit= input[i]-'0';
    char ch = digit +'A' -1;
    output[j]=ch;
    stringGenerator(input,output,i+1,j+1);
    
    // including the secong digit
    if (input[i+1]!='\0'){
        int second = input[i+1]-'0';
    int ans = digit*10 +  second;

    if (ans<=26){
           char m = ans +'A'-1;
           output[j]= m;
           stringGenerator(input,output,i+2,j+1);
    }
    }
    
}

int main() {
char input[100];
cin>>input;
char output[100];
stringGenerator(input,output,0,0);
}
