#include<iostream>
#include<string.h>
#include<set>
using namespace std;
void permute(char *input,int i,set<string> & s){
    // base case 
    if (input[i]=='\0'){
      ////  cout<<input<<endl;
      string t(input);
      s.insert(t);
        return;
    }
    // recurssibve case 
    for (int j=i;input[j]!='\0';j++){
         swap(input[i],input[j]);
         permute(input,i+1,s);
         swap(input[i],input[j]);
    }
}
int main() { 
    char input[100];
    cin>>input;
    set<string> s;
    permute(input,0,s);
    for (auto str:s){
        cout<<str<<endl;
    }
	return 0;
}