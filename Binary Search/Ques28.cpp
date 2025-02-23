#include <iostream>
#include <string>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
bool ans=false;
int s=0;
int e=n-1;
while (s<=e){
    int mid= (s+e)/2;
    if (a[mid]==key){
        cout<<mid;
        ans=true;
        break;
    }
    else if (a[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
if (ans==false){
    cout<<"-1";
}
    return 0;
}