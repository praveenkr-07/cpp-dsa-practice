#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    // paramaterised constructor
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->right);
    displayTree(root->left);
}

int sumTree(Node *root)
{
    if (root == NULL)
        return 0;
    int ans = root->val + sumTree(root->left) + sumTree(root->right);
    return ans;
}

int productTree(Node *root)
{
    if (root == NULL)
        return 1;
    if (root->val == 0)
        return 0;
    int ans = root->val * productTree(root->left) * productTree(root->right);
    return ans;
}

int maxNode(Node *root)
{
    if (root == NULL)
        return INT16_MIN;
    return max(root->val, max(maxNode(root->left), maxNode(root->right)));
}

int minNode(Node *root)
{
    if (root == NULL)
        return INT16_MAX;
    return min(root->val, min(minNode(root->left), minNode(root->right)));
}

int treeSize(Node *root) // no. of nodes 
{
    if (root == NULL)
        return 0;
    int size = 1 + treeSize(root->left) + treeSize(root->right);
    return size;
}

int treeLevels(Node *root)
{
    if (root == NULL)
        return 0;
    int level = 1 + max(treeLevels(root->left), treeLevels(root->right));
    return level;
}

int treeHeight(Node *root)
{
    return treeLevels(root) - 1;
}

int main()
{
    Node *a = new Node(1); // root node
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    displayTree(a);

    cout << endl;

    cout << sumTree(a) << endl;

    cout << treeSize(a) << endl;

    cout << maxNode(a) << endl;

    cout << minNode(a) << endl;

    cout << productTree(a) << endl;

    cout << treeLevels(a) << endl;

    cout << treeHeight(a) << endl;
}
