#include <iostream>
#include<string.h>
using namespace std;
void conert_pi(char *a,int i){
  if (a[i]=='\0'){
      return;
  }
  if (a[i]=='p' and a[i+1]=='i'){
      cout<<"3.14";
      conert_pi(a,i+2);
  }
else{
    cout<<a[i];
     conert_pi(a,i+1);
}

}
int main(){
int t;
cin>>t;
while (t--){
char a[10000];
cin>>a;
conert_pi(a,0);
cout<<endl;
}

    return 0;
}