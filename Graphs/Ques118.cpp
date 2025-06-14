#include <iostream>
#include<queue>
#include<map>
#include<list>
#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph {
    map<T,list<T> > l;
    public :
    void addEdge(T x,T y){
        l[x].push_back(y);
        // l[y].push_back(x);
    }
      void shortestPath(T src, T dest){
          map<T,int>dist;
          queue<T>q;
          q.push (src);
          
          for (auto node_pair:l){
              T node= node_pair.first;
              dist[node]=INT_MAX;
          }
          dist[src]=0;
          while (!q.empty()){
              T node=  q.front();
              q.pop();
              for (int nbr : l[node]){
                  if (dist[nbr]==INT_MAX){
                      q.push(nbr);
                      dist[nbr]=dist[node]+1;
                  }
              }
          }
          for (auto node_pair:l){
           cout<<node_pair.first << "dist form dest "<<dist[node_pair.first]<<endl;
          }
        // return dist[dest];
      }
};

int main() {
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;
Graph<int>g;
for (int i=0;i<36;i++){
    for (int dice=1;dice<=6;dice++){
        int j=i+dice;
        j= j+board[j];
        if (j<=36){
            g.addEdge(i,j);
        }
    }
}
g.shortestPath(0,36);
}
