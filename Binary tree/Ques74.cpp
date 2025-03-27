#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*rigth;
    node(int d){
        data=d;
        left=NULL;
        rigth=NULL;
    }

};
node*buildtree(){
   int d;
   cin>>d;
   if (d==-1){
       return NULL;
   }
   node*root= new node(d);
   root->left =buildtree();
   root->rigth = buildtree();
   return root;
}
void printInPre(node*root){
    if (root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printInPre(root->left);
    printInPre(root->rigth);
}
int main() {
node*root = buildtree();
printInPre(root);
return 0;
}
