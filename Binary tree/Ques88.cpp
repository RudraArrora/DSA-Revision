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
int sum(node*root){
    if (root==NULL){
        return 0;
    }
 int ls=   sum(root->left);
   int rs = sum(root->rigth);
    return root->data +ls+rs;
}
int diameter(node*root){
    if (root==NULL){
        return 0;
    }
    int h1=hiegth(root->left);
    int h2=hiegth(root->rigth);
    // we have three option 1 st is taht it passing throught node
    int op1 = h1+h2;
    // second remains in the left 
    int op2=diameter(root->left);
    // thirsr is remains in right 
    int op3 = diameter(root->rigth);
    return max(op1,max(op2,op3));
}
// Diameter Optimized 
// By using Bottom Up Approach 
// class Pair{
//     public:
//     int hiegth;
//     int diameter;
// }
// Pair OptimizedDiameter(node*root){
//     Pair p;
//     if (root==NULL){
//     p.hiegth=0;
//     p.diameter=0;
//     return p;
//     }
//     // botoom ups 
//    Pair left= OptimizedDiameter(root->left);
//    Pair rigth =  OptimizedDiameter(root->rigth);
//    p.hiegth = max(left.hiegth,rigth.hiegth)+1;
//    p.diameter= max(left.hiegth+rigth.hiegth, max(left.diameter,rigth.diameter));
//    return p;
// }
int replaceSum(node*root){
    if (root==NULL){
        return 0;
    }
  if (root->left ==NULL && root->rigth==NULL){
      return root->data;
  }
    int ls=replaceSum(root->left);
    int rs= replaceSum(root->rigth);
    int temp= root->data;
    root->data = ls+rs;
    return temp +root->data;
}
// class HBpair {
//     int hiegth;
//     bool balance;
// };
// HBpair isBalanced(node*root){
//     HBpair p;
//     if (root==NULL){
//         hiegth=0;
//         balance=true;
//         return p;
//     }
//   HBpair left = isBalanced(root->left);
//   HBpair rigth = isBalanced(root->rigth);
//   p.hiegth = max (left.hiegth,rigth.hiegth)+1;
//   if (abs(left.hiegth-rigth.hiegth)>1 && left.balance && right.balance){
//       p.balance =true;
//   }
//   else{
//       p.balance =false;
//   }
//   return p;
// }
void mirror(node*root){
    if (root==NULL){
        return;
    }
  swap(root->left,root->rigth);
    mirror(root->left);
    mirror(root->rigth);
}
void printAtlevelK(node*root,k){
    if (root==NULL){
        return ;
    }
    if (k==0){
        cout<<root->data;
    }
    printAtlevelK(root->left,k-1);
    printAtlevelK(root->rigth,k-1);
}
int printNodeAtKthDist(node*root,k,int target){
    if (root==NULL){
        return -1;
    }
    if (root==target){
      printAtlevelK(root,k);
      return 0;
    }
    // two cases
    // frist is that the target is in left
    int DL = printNodeAtKthDist(root->left,k,target);
    if (DL!=-1){
        // we are printiong when the root is at k dist
        if (DL+1==k){
            cout<root->data;
        }
        // searching the rigth subtree
        else{
            printAtlevelK(root->rigth,k-DL-2);
        }
        return DL+1;
    }
     int DR = printNodeAtKthDist(root->rigth,k,target);
         if (DR!=-1){
              // we are printiong when the root is at k dist
        if (DR+1==k){
            cout<root->data;
        }
        // searching the left subtree
        else{
            printAtlevelK(root->left,k-DR-2);
        }
        return DR+1
    }
    return -1;
}
int main() {
node*root = buildtree();
// printInPre(root);
// cout<< hiegth(root);
// cout<<endl;
// printKthDown(root,2);
// bfs(root);
// cout<<count(root);
// cout<<sum(root);
// cout<<diameter(root);
// replaceSum(root);
bfs(root);
cout<<endl;
printNodeAtKthDist(root,1,3);
// mirror(root);
// bfs(root);
// bfsRigth(root);
//Input=3 4 -1 6 -1 -1 5 1 -1 -1 -1 
// printInInOrder(root);
// printPost(root);
return 0;
}
