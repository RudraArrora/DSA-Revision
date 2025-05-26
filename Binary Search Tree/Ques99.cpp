#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
void bfs(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        if (f == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << f->data << " ";
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
}

node *buildTree(node *root, int d)
{
    if (root == nullptr)
    {
        return new node(d);
    }
    if (d < root->data)
    {
        root->left = buildTree(root->left, d);
    }
    else
    {
        root->right = buildTree(root->right, d);
    }
    return root;
}
vector<int> v;
void preorder(node *root, int l, int r)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    if (root->data >= l && root->data <= r)
    {
        v.push_back(root->data);
    }
    preorder(root->left, l, r);
    preorder(root->right, l, r);
    return;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        node *root = nullptr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            root = buildTree(root, a);
        }
        int l, r;
        cin >> l >> r;
        cout << "# Preorder : ";
        preorder(root, l, r);
        cout << endl;
        cout << "# Nodes within range are : ";
        sort(v.begin(), v.end());
        for (auto j : v)
        {
            cout << j << " ";
        }
        cout << endl;
		v.clear();
    }