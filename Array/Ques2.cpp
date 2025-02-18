#include<iostream>
using namespace std;
int main(){
int arr[10][10];
int r,c;
cin>>r>>c;
  for(int row=0;row<r;row++){
    for(int column=0;column<c;column++){
        cin>>arr[row][column];
    }
}
for(int column=0;column<c;column++){
    if(column%2==0){
    for(int row=0;row<r;row++){
        cout<<arr[row][column]<<", ";
    }
    }
    if(column%2!=0){
    for(int row=r-1;row>=0;row--){
        cout<<arr[row][column]<<", ";
    }
    }
}
cout<<"END";
return 0;
}