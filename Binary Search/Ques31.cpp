#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int low=0;
int mid=0;
int high=n-1;
while (mid<=high){
    if (a[mid]==2){
        swap(a[mid],a[high]);
        high--;
    }
    else if (a[mid]==0){
        swap(a[mid],a[low]);
        mid++;
        low++;
    }
    else{
            mid++;
        }
    }

for (int i=0;i<n;i++){
    cout<<a[i];
}
return 0;
}
