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

void preorderTraversal(Node *root)
{
    if (root == NULL) 
        return;

    cout << root->val <<" ";  // work -> root
    preorderTraversal(root->left);  // call1 -> left
    preorderTraversal(root->right); // call2 -> right
}
void inorderTraversal(Node *root)
{
    if (root == NULL) 
        return;

    inorderTraversal(root->left);  // call1 -> left
    cout << root->val <<" ";  // work -> root 
    inorderTraversal(root->right); // call2 -> right
}

void postorderTraversal(Node *root)
{
    if (root == NULL) 
        return;

    postorderTraversal(root->left);  // call1 -> left
    postorderTraversal(root->right); // call2 -> right
    cout << root->val <<" ";  // work -> root 
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
    Node *h = new Node(8);
    Node *i = new Node(9);
    Node *j = new Node(10);
    Node *k=  new Node(13);
    Node *l = new Node(11);


    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    d->left = NULL;
    d->right=h;

    e->left =i;
    e->right=j;

    f->left =NULL;
    f->right=k;

    g->left = l;
    g->right=NULL;

    preorderTraversal(a);
    cout << endl;
    inorderTraversal(a);
    cout << endl;
    postorderTraversal(a);
    cout << endl;

}
