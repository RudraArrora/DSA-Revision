#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int  data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
node* buildTree()
{
int  s;
    cin>>s;
    if(s=="-1")
    {
        return nullptr;
    }
    else if(s!="true")
    {
        cin>>s;
    }
    node*root=new node(s);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void topView(node*root,queue<int>&output){
    if (root==nullptr){
        return;
    }
    queue<pair<node*,int> >q;
    map<int,int>m;
    q.push({root,0});
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        node*n=f.first;
        int line = f.second;
        if (m.find(line)==m.end()){
            m[line]=n->data;
        }
        if (n->left!=nullptr){
            q.push({n->left,line-1});
        }
        if (n->right!=nullptr){
            q.push({n->right,line+1});
        }
}
for (auto x : m){
    output.push(x.second);
}
}
int main() {
 node*root=buildTree();
queue<int>output;
topView(root,output);

while(!output.empty()){
    cout<<output.front()<<" ";
    output.pop();
}
    return 0;
}