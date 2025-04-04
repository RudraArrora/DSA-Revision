#include <iostream>
#include<queue>
#include<math.h>
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
int heigth(node*root){
    if (root==nullptr){
        return 0;
    }
    int left=heigth(root->left);
    int right=heigth(root->right);
    return max(left,right)+1;
}
void print_l_r(node*root,int k){
    if (root==nullptr){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    print_l_r(root->left,k-1);
    print_l_r(root->right,k-1);
}
void print_r_l(node*root,int k){
    if (root==nullptr){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    print_l_r(root->right,k-1);
    print_l_r(root->left,k-1);
}
void print_zig_zag(node*root){
    if (root==nullptr){
        return;
    }
  for (int i=0;i<heigth(root);i++){
      if (i%2==0){
          print_l_r(root,i);
      }
      else{
          print_r_l(root,i);
      }
  }
}
int main() {
node*root=buildTree();
// cout<<heigth(root);
print_zig_zag(root);
 return 0;
}
