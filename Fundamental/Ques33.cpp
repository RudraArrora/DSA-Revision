#include<iostream>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	for(int i=1;i<=tc;i++){
		int n;
		cin>>n;
		int ans=0;
		int p=1;
		while(n>0){
			int ld=n%10;
			ans+=(ld*p);
			p*=2;
			n/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}