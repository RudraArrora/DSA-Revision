#include<iostream>
#include<string>
using namespace std;
int main(){
   char alpha;
cin>>alpha;
    if (65<=int(alpha) && int (alpha)<=90){
        cout<<"U";
    }
    else if (97<=int(alpha) && int (alpha)<=122){
        cout<<"L";
    }
    else {
        cout<<"I";
    }
    
return 0;
}