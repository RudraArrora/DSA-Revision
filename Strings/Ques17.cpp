#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
    
    string s;
    cin>>s;
    int largest=-1;
    int a[128]={0};
    int larg=INT_MIN;
    for (int j=0 ; j<s.length(); j++){
        a[int(s[j])]+=1;
    }

for (int i=0 ;i<128 ; i++){
    if (a[i]>larg){
        larg=a[i];
		largest=i;
    }
}
cout<<char(largest);
	return 0;
}