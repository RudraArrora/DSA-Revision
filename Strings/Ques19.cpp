#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    char s[n];
for (int i=0;i<n;i++){
    cin>>s[i];
}
       int a=0;
       int b=n-1;
       bool ans=true;
       for (int i=0;i<n-1;i++){
               if (s[a]==s[b]){
                   a++;
                   b--;
               }
               else {
                   ans=false;
                   cout<<"false";
                   break;
               }
       } 
       if (ans!=false){
           cout<<"true";
       }
    return 0;
}