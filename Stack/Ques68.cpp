#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
stack<int>s;
int n;
cin>>n;
int a,b;
for (int i=0;i<n;i++){
      cin>>a;
      if (a==2){
          cin>>b;
          s.push(b);
      }

     else if (a==1 && !s.empty()){
          cout<<s.top()<<endl;
          s.pop();
      }
else{
cout<<"No Code"<<endl;
}
}

 return 0;
}
