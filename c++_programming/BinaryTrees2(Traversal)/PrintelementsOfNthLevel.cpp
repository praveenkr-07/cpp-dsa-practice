#include <iostream>
#include <queue>
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
int levels(Node* root)
{
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void NthLevel(Node *root , int level , int givenLevel) 
{
    if (root == NULL)  return;
    if(level==givenLevel)
    {
        cout << root->val <<" "; 
        return;
    }  
    NthLevel(root->left,level+1 ,givenLevel ); // call1 -> left
    NthLevel(root->right,level+1 ,givenLevel); // call2 -> right
}
void ReverseNthLevel(Node *root , int level , int givenLevel) 
{
    if (root == NULL)  return;
    if(level==givenLevel)
    {
        cout << root->val <<" "; 
        return;
    }  
    ReverseNthLevel(root->right,level+1 ,givenLevel); // call2 -> right
    ReverseNthLevel(root->left,level+1 ,givenLevel ); // call1 -> left
}

void levelOrderTraversal(Node *root)
{
    int n = levels(root);
    for(int i =1 ;i<=n;i++)
    {
        NthLevel(root,1,i);
        cout<<endl;
    }
}
void levelOrderQueue(Node *root)
{
    queue<Node*> q;
    q.push(root);
    while(q.size()>0)
    {
        Node* temp =q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
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
    // Node *h = new Node(8);
    // Node *i = new Node(9);
    // Node *j = new Node(10);
    // Node *k=  new Node(13);
    // Node *l = new Node(11);

    a->left  = b;
    a->right = c;

    b->left  = d;
    b->right = e;

    c->left  = f;
    c->right = g;

    // d->left = NULL;
    // d->right=h;

    // e->left =i;
    // e->right=j;

    // f->left =NULL;
    // f->right=k;

    // g->left = l;
    // g->right=NULL;

    
    // NthLevel(a,1,3);
    // cout << endl;

    //level order traversal => level-wise print krna

    levelOrderQueue(a);
}
