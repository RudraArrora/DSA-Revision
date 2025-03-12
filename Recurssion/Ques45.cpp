
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sub(char*input,char*out ,int i,int j){
    if (input[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    // including
    out[j]=input[i];
    sub(input,out,i+1,j+1);
    // excluding 
    sub(input,out,i+1,j);
}
int main() {
char input[]="abc";
char out[100];
sub(input,out,0,0);
    return 0;
}