#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        node*left=NULL;
        node*right=NULL;
    }
};
node *build_tree(){
    int d;
    cin>>d;
    if (d==-1){
        return NULL;
    }
    node *root=new node(d);
    root->left=build_tree();
    root->right=build_tree();
    return root;
}
void print (node*root){
    if (root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
node *build_array(int *a,int s,int e){
    if (s>e){
        return NULL;
    }
    int mid =(s+e)/2;
    node *root=new node (a[mid]);
    root->left=build_array(a,s,mid-1);
    root->right=build_array(a,mid+1,e);
    return root;
    }
	void pre_order(node *root){
		if (root==NULL){
			return ;
		}
		cout<<root->data<<" ";
		pre_order(root->left);
		pre_order(root->right);
	}
int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
      node *root=  build_array(a,0,n-1);
       pre_order(root);
	   cout<<endl;
    }
return 0;
}