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
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void bottomView(node* root, queue<int>& output) {
    if (root == nullptr) {
        return;
    }

    map<int, int> m;
    queue<pair<node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto f = q.front();
        q.pop();
        node* n = f.first;
        int line = f.second;

        // Store the bottommost node at 'line'
        
        m[line] = n->data;

        if (n->left != nullptr) {
            q.push({n->left, line - 1});
        }
        if (n->right != nullptr) {
            q.push({n->right, line + 1});
        }
    }

    // Push the bottom view elements into the output queue
    for (auto x : m) {
        output.push(x.second);
    }
}

int main() {
node *root = buildTree();


    return 0;
}