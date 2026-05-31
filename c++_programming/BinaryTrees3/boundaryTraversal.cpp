#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* constructTree(int arr[], int n)
{
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i =1;
    int j =2;
    while(q.size()>0 && i<n)
    {
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;

        if(arr[i]!=INT16_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!= n && arr[j]!=INT16_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left=l;
        temp->right=r;
        
        if(l) q.push(l);
        if(r) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void LeftBoundary(Node* root)
{
    if(root==NULL || (root->left == NULL && root->right==NULL)) 
    return;
    cout<<root->val<<" ";
    LeftBoundary(root->left);
    if(root->left==NULL) LeftBoundary(root->right);
}
void leafNode(Node* root)
{
    if(root==NULL) return;
    if(root->left == NULL && root->right==NULL) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}
void RightBoundary(Node* root)
{
    if(root==NULL || (root->left == NULL && root->right==NULL)) 
    return;
    RightBoundary(root->right);
    if(root->right==NULL) RightBoundary(root->left);
    cout<<root->val<<" ";
}
void Boundary(Node* root)
{
    LeftBoundary(root);
    leafNode(root);
    RightBoundary(root->right);
}
int main()
{   
    int arr[] = { 1,2,3,4,5,INT16_MIN,6,7,INT16_MIN,8,INT16_MIN,9,10,INT16_MIN,11,INT16_MIN,12,INT16_MIN,13,INT16_MIN,14,15,16,INT16_MIN,17,INT16_MIN,INT16_MIN,18,INT16_MIN,19,INT16_MIN,INT16_MIN,INT16_MIN,20,21,22,23,INT16_MIN,24,25,26,27,INT16_MIN,INT16_MIN,28,INT16_MIN,INT16_MIN,};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node * root = constructTree(arr,n);
    LeftBoundary(root);
    //cout<<endl;
    leafNode(root);
    //cout<<endl;
    RightBoundary(root->right);
}
