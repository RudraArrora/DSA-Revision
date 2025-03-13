#include <iostream>
#include <set>
#include <string>
using namespace std;
void stringToInt(string &input,int sum,int n,int i,int power){
 if (n==-1){
 cout<<sum;
 return;
 }
    int digit= (input[i]-'0')*power;
    sum=sum+digit;
    stringToInt(input,sum,n-1,i-1,power*10);

}
int main() {
string input;
cin>>input;
stringToInt(input,0,input.length()-1,input.length()-1,1);
    return 0;
}
