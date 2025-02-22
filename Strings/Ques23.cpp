#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k;
    cin>>k;
    int s;
    cin>>s;
    char c[n][m];
   for (int i=0;i<n;i++){
       for (int j=0;j<m;j++){
           cin>>c[i][j];
       }
   }
   bool ans=true;
   int j=0;
      for (int i=0;i<n;i++){
          if (s<k){
              ans=false;
              break;
          }
         for(int j=0;j<m;j++){
                 if (s<k){
                     ans=false;
                     break;
                 }
             else if (c[i][j]=='.'){
                  if (j==m-1){
                      s=s-2;
                  }
                  else{ 
                      s=s-3;
                  }
              }
              else if (c[i][j]=='*'){
                  s=s+5-1;
              }
              else{
                  break;
              }
         }
      }
      if (ans==false){
          cout<<"False"<<endl;
      }
      else{
          cout<<"True"<<endl;
      }
      cout<<s;
    return 0;
}