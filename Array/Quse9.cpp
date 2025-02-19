#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n][n];
for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	cin>>a[i][j];
}
}
// reversing the rows
for (int rows=0;rows<n;rows++){
	int i=0;
	int j=n-1;
	while (i<j){
		 swap(a[rows][i],a[rows][j]);
		 i++;
		 j--;
	}
}
// taking the tanspose 
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
		if (i<j){
			swap(a[i][j],a[j][i]);
		}
	}
}

for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	cout<<a[i][j]<<" ";
 } 
cout<<endl;
}
	return 0;
}