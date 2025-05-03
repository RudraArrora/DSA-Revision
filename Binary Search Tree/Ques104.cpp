#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    string data;
    node*left;
    node*right;
    node(string d)
    {
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
class Pair{
    public:
    int heigth;
    bool balance;
};
node* buildTree()
{
    string s;
    cin>>s;
    if(s=="false")
    {
        return nullptr;
    }
    else if(s=="true")
    {
        cin>>s;
    }
    node*root=new node(s);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
Pair fastDaimeter(node*root){
    Pair p;
    if (root==nullptr){
        p.heigth=0;
        p.balance=true;
        return p;
    }
Pair left = fastDaimeter(root->left);
Pair right = fastDaimeter(root->right);
p.heigth = max(left.heigth,right.heigth)+1;
if (abs(left.heigth-right.heigth)<=1 && left.balance && right.balance){
    p.balance=true;
}
else{
    p.balance=false;
}
return p;
}
using namespace std;
int main() {
    node*root=buildTree();
   if (fastDaimeter (root).balance){
       cout<<"true";
   }
   else{
       cout<<"false";
   }
   return 0;
}
