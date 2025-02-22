#include<iostream>
#include<string>
using namespace std;
int main(){
   char a;
cin>>a;
if (97<=int(a) && int(a)<=122){
    cout<<"lowercase";
}
else if ( 65<=int(a) && int(a)<=90){
    cout<<"UPPERCASE";
}
else {
    cout<<"Invalid";
}
    
return 0;
}