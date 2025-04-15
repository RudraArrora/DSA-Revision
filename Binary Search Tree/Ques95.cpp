#include <iostream>
using namespace std;

class node
{
public:
    string data;
    node *left;
    node *right;
    node(string s)
    {
        data = s;
        left = nullptr;
        right = nullptr;
    }
};
node *buildTree()
{
    string s;
    cin >> s;
    if (s == "false")
    {
        return nullptr;
    }
    if (s == "true")
    {
        cin >> s;
    }
    node *root = new node(s);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

bool are_idebtical(node*a,node*b){
    if (a==nullptr && b==nullptr){
        return true;
    }
    // if both the side something is present 
    if (a!=nullptr && b!=nullptr){
        bool left=are_idebtical(a->left,b->left);
        bool right=are_idebtical(a->right,b->right);
         return left and right;
    }
    return false;
}
int main() {

 node *root = buildTree();
    node *boot = buildTree();

    if (are_idebtical(root, boot))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}