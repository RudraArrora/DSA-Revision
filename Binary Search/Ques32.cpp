#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
bool canPlace(int*a,int n,int c,int min){
    int cows=1;
    int curr= a[0];
    for (int i=1;i<n;i++){
        if (a[i]-curr>=min){
            curr=a[i];
            cows++;
            if (cows==c){
                return true;
            }
        }
    }
    return false;
}
using namespace std;
int main() {
int n;
cin>>n;
int c;
cin>>c;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int s=a[0];
int e=a[n-1];
int finalans;
while (s<=e){
    int mid =(s+e)/2;
    if (canPlace(a,n,c,mid)){
        finalans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
}
cout<<finalans;

return 0;
}
