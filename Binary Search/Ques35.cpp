#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isValid(long long int n, long long int*arr, long long int k, long long int mid)
{
    long long int painter=1;
    long long int currBoard=0;
    for(long long int i=0; i<n; i++)
    {
        if(currBoard+arr[i]>mid)
        {
            painter++;
            currBoard=arr[i];
            if(painter>k)
            {
                return false;
            }
        }
        else
        {
            currBoard+=arr[i];
        }
    }
    return true;

}
long long int result(long long int n, long long int*arr,long long int k,long long int s, long long int e)
{
    long long int ans=0;
    while(s<=e)
    {
        long long int mid=(s+e)/2;
        if(isValid(n,arr,k,mid))
        {
            e=mid-1;
            ans=mid;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    long long int n,k,t;
    cin>>n>>k>>t;
    long long int arr[n];
    long long int max=INT_MIN;
    long long int sum=0;
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
        sum+=arr[i];
    }
    long long int s=max;
    long long int e=sum;
    long long int ans=(result(n,arr,k,s,e))*t;
    cout<<ans%10000003;
}