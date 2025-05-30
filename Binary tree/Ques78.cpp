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
void printInInOrder(node*root){
    if (root==NULL){
        return;
    }
    printInInOrder(root->left);
    cout<<root->data<<" ";
    printInInOrder(root->rigth);
}
void printPost(node*root){
    if (root==NULL){
        return;
    }
    printPost(root->left);
    printPost(root->rigth);
    cout<<root->data<<" ";
}
int hiegth(node*root){
    if (root==NULL){
        return 0;
    }
    int ls= hiegth(root->left);
    int rs = hiegth(root->rigth);
    return max(ls,rs)+1;
}
void printKthDown(node*root,int k){
    if (root==NULL){
        return ;
    }
    if (k==1){
        cout<<root->data<<" ";
    }
    printKthDown(root->left,k-1);
    printKthDown(root->rigth,k-1);
}
int main() {
node*root = buildtree();
// printInPre(root);
// cout<< hiegth(root);
// cout<<endl;
printKthDown(root,2);
//Input=3 4 -1 6 -1 -1 5 1 -1 -1 -1 
// printInInOrder(root);
// printPost(root);
return 0;
}
