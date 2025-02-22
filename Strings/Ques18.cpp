#include <iostream>
#include <string>
using namespace std;

int main() {
        string s;
        getline(cin, s);
   int freq=0;
        for (int i = 0; i < s.length(); i++) {
            
               if (s[i]!=s[i+1]){
                   freq++;
                   cout<<s[i]<<freq;
                   freq=0;
               }
               else{
                       freq++;
               }
           
        }
    return 0;
}