#include <iostream>
#include<bits/stdc++.h>
typename<typename>T;
class Graph{
    map<T,list<T>>l;
    public:
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs_helper(T src,  map<T,bool>&visited){
        cout<<src<<" ";
        visited[src]=true;
        for (auto nbr: l[src]){
            if (!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }
    }
    void dfs(){
        map<T,bool>visited;
        for (auto p : l){
            T node = p.first;
            visited[node]=false;
        }
    }
    for (auto p:l){
        int ans = p.first;
        if (!visited[ans]){
         dfs_helper(ans,visited);
        }
    }

}
using namespace std;
int main() {
   
   
}