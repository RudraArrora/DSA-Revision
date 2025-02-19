#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int max1=INT_MIN;
int max2=INT_MIN;
int max_left_right[n];
int max_right_left[n];
// for let to right max array
for (int i=0;i<n;i++){
      if (a[i]>max1){
          max1=a[i];
          max_left_right[i]=max1;
      }
      else{
          max_left_right[i]=max1;
      }
}
// for (int i=0;i<n;i++){
//     cout<<max_left_right[i]<<" ";
// }
for (int i=n-1;i>=0;i--){
      if (a[i]>max2){
          max2=a[i];
          max_right_left[i]=max2;
      }
      else{
          max_right_left[i]=max2;
      }
}
// cout<<endl;
// for (int i=0;i<n;i++){
//     cout<<max_right_left[i]<<" ";
// }
int water=0;
for (int i=0;i<n;i++){
     water= water+ (min(max_left_right[i],max_right_left[i])-a[i]);
}
// cout<<water<<" : Is the amount of water being taped in building";
cout<<water;
 return 0;
}
