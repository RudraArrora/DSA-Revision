#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
node *buildTree()
{
    int a, b;
    cin >> a >> b;
    node *root = new node(a);
    if (b == 0)
    {
        root->left = nullptr;
        root->right = nullptr;
    }
    else if (b == 1)
    {
        root->left = buildTree();
        root->right = nullptr;
    }
    else
    {
        root->left = buildTree();
        root->right = buildTree();
    }
    return root;
}
void nodeKLevelDown(node*root,int k,stack<int>&s){
    if(root==nullptr){
        return;
    }
    if (k==0){
        s.push(root->data);
    }
    nodeKLevelDown(root->left,k-1,s);
       nodeKLevelDown(root->right,k-1,s);
}
int main() {
node *root = buildTree();
stack<int>s;
    int k;
    cin >> k;
    nodeKLevelDown(root, k,s);
    int sum=0;
while (!s.empty()){
    sum=sum+s.top();
    s.pop();
}
    cout<<sum;

    return 0;
}