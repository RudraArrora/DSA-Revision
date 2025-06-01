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
void bfs(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        node*f=q.front();
        if (f==NULL){
            cout<<endl;
            q.pop();
            if (!q.empty()){
                q.push(NULL); 
          }
       }
        else{
      cout<<f->data<< " ";
        q.pop();
        if (f->left!=NULL) {
            q.push(f->left);
        }   
        if (f->rigth!=NULL){
            q.push(f->rigth);
        }
        }

    }
    return;
}
int count(node*root){
    if (root==NULL){
        return 0;
    }
    int ls = count(root->left);
    int rs = count(root->rigth);
    return 1+ls+rs;
}
int main() {
node*root = buildtree();
// printInPre(root);
// cout<< hiegth(root);
// cout<<endl;
// printKthDown(root,2);
// bfs(root);
cout<<count(root);
//Input=3 4 -1 6 -1 -1 5 1 -1 -1 -1 
// printInInOrder(root);
// printPost(root);
return 0;
}
