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
class Linklist{
    public:
    node*head;
    node*tail;
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
node*deleteFromTree(node*root,int key){
    if (root==NULL){
        return NULL;
    }
    else if (key>root->data){
        root->rigth = deleteFromTree(root->rigth,key);
    }
    else if (key < root->data){
        root->left = deleteFromTree(root->left,key);
    }
    else{
     // found and have zero child means is a leaf node
     if (root->left==NULL && root->rigth==NULL){
            delete root;
            return NULL;
     }
     // found have one child 
     if (root->left!=NULL && root->rigth==NULL){
         node*temp=root->left;
         delete root;
         return temp;
     }
     if (root->left==NULL && root->rigth!=NULL){
         node*temp=root->rigth;
         delete root;
         return temp;
     }
     // have two child 
     if (root->left!=NULL && root->rigth!=NULL){
         node*temp=root->rigth;
         while(temp->left!=NULL){
             temp=temp->left;
         }
         root->data=temp->data;
         root->rigth = deleteFromTree(root->rigth,root->data);
         return root;
    }
   }
    return root;
}
bool checkifBST(node*root,int minL,int maxR){
    if (root==NULL){
        return true;
    }
    if (root->data>minL && root->data<maxR && checkifBST(root->left,minL,root->data)&& checkifBST(root->rigth,root->data,maxR)){
        return true;
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
Linklist fallter(node*root){
    Linklist l;
    if (root==NULL){
        l.head = l.tail = NULL;
        return l;
    }
    // leaf node
    if (root->left==NULL && root->rigth==NULL){
        l.head = l.tail = root;
        return l;
    }
    // 2 case 
    // that if left is existing
    
 if (root->left!=NULL && root->rigth==NULL){
       Linklist LL = fallter(root->left);
       LL.tail->rigth = root;
       l.head = LL.head;
       l.tail=root;
       return l;
    }
    if (root->left==NULL && root->rigth!=NULL){
       Linklist RR = fallter(root->rigth);
       root->rigth = RR.head;
       l.head = root;
       l.tail = RR.tail;
       return l;
    } 
    // both side not null
  Linklist LL =   fallter(root->left);
   Linklist RR =  fallter(root->rigth);
    LL.tail->rigth = root;
    root->rigth = RR.head;
    l.head = LL.head;
    l.tail = RR.tail;
    return l;
}

int main() {
    node*root = buildtree();
    bfs(root);
    cout<<endl;
    // cout<<isPresent(root,3);
    // deleteFromTree(root,7);
    // cout<<endl;
    // bfs(root);
// cout<<checkifBST(root,INT_MIN,INT_MAX);
Linklist l=  fallter(root);
node*temp = l.head;
while (temp!=NULL){
    cout<<temp->data<<" ---?";
    temp=temp->next;
}

return 0;
}
