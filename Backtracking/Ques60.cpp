#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool ratmaze(char maze [10][10],int sol[][10],int i,int j,int m,int n){
    if (i==m && j==n){
        sol[i][j]=1;
        for (int i=0;i<=m;i++){
            for (int j=0;j<=n;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
// if out of the box
    if (i>m || j>n){
        return false;
    }
    if (maze[i][j]=='0'){
        return false;
    }
    // assume that the path at current cell is true
    sol[i][j]=1;
    int rigth=ratmaze(maze,sol,i,j+1,m,n);
    int left= ratmaze(maze,sol,i+1,j,m,n);
    if (rigth || left){
        return true;
    }
    sol[i][j]=0;
    return false;

}
int main() {
    char maze[10][10]={
         "1000",
         "1101",
         "1100",
         "0111"};
    int sol [10][10]={0};
    int m=4;
    int n=4;
    bool ans =ratmaze(maze,sol,0,0,m-1,n-1);
    if (ans==false){
        cout<<"Path does not exist";
    }
return 0;
}
