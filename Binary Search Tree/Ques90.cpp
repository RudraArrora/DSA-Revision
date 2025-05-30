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
node* InsertInBST(node*root,int data){
    if (root==NULL){
        return new node(data);
    }
    if (data<=root->data){
        root->left = InsertInBST(root->left,data);
    }
    else{
        root->rigth = InsertInBST(root->rigth,data);
    }
    return root;
}
node* buildtree(){
    int d;
    cin>>d;
    node*root=NULL;
    while (d!=-1){
        root=InsertInBST(root,d);
        cin>>d;
    }
    return root;
}
bool isPresent(node*root,int key){
    if (root==NULL){
        return false;
    }
    if (root->data==key){
        return true;
    }
    if (key<=root->data){
        return isPresent(root->left,key);
    }
    else{
      return isPresent(root->rigth,key);
    }
   return false;
}
void bfs(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*f=q.front();
        if (f==NULL){
            cout<<endl;
            q.pop();
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{
         cout<<f->data<<" ";
        q.pop();
        if (f->left!=NULL){
            q.push(f->left);
        }
        if (f->rigth!=NULL){
            q.push(f->rigth);
        }

        }
    }
}
int main() {
    node*root = buildtree();
    bfs(root);
    cout<<endl;
    cout<<isPresent(root,3);
return 0;
}
