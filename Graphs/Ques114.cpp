#include <iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }
    void AddEgde(int x,int y){
        // considering that it is bidirectional edges
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void print(){
        for (int i=0;i<V;i++){
            cout<<"Vertex"<<i<<"--->";
            for (int nbr:l[i]){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    Graph g(4);
    g.AddEgde(0,1);
     g.AddEgde(0,2);
      g.AddEgde(2,3);
       g.AddEgde(1,2);
g.print();
  return 0;
}
