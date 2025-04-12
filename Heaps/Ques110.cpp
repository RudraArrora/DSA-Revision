#include <iostream>
#include<queue>
#include<math.h>
using namespace std;
int joinrope(int rope[],int n){
    priority_queue<int,vector<int>,greater<int> > pq(rope,rope+n);
int sum=0;
    while(pq.size()>1){
      int a= pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
      int newrope=a+b;
         sum =sum+ newrope;
         pq.push(newrope);
    }
    return sum;
}
int main() {
int ropes[]={4,3,2,6};
int n = 4;
cout<<joinrope(ropes,n);
 return 0;
}
