#include <iostream>
using namespace std;
void merge(int s,int e,int *a){
    int mid =(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while (i<=mid && j<=e){
        if (a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while (i<=mid){
        temp[k++]=a[i++];
    }
    while (j<=e){
        temp[k++]=a[j++];
    }
    for (int i=0;i<=e;i++){
        a[i]=temp[i];
    }
}
void mergeSort(int s,int e ,int a[]){
    if (s>=e){
        return;
    }
    int mid =(s+e)/2;
    mergeSort(s,mid,a);
    mergeSort(mid+1,e,a);
    merge(s,e,a);

}
int main() {
    int n;
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++){
    cin>>a[i];
    }
    mergeSort(0,n,a);
     for (int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
return 0;
}
