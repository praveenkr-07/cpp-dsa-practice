#include <iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<limits.h>
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

vector<int> preorderTraversalIterative(Node* root , vector<int>& v)
{
    if (root == NULL) 
        return v;
    stack<Node*> st;
    st.push(root);
    while(st.size()>0)
    {
        Node* temp =  st.top();
        st.pop();

        v.push_back(temp->val);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    return v;
}
vector<int> postorderTraversalIterative(Node* root , vector<int>& v)
{
    if(root==NULL) return v;
    stack<Node*> st;
    st.push(root);
    while(st.size()>0)
    {
        Node* temp = st.top();
        st.pop();

        v.push_back(temp->val);
        if(temp->left) st.push(temp->left);
        if(temp->right )  st.push(temp->right ) ;
    }
    reverse(v.begin(),v.end());
    return (v);
    }

    vector<int> inorderTraversalIterative(Node* root , vector<int>& v)
    {
        stack<Node*> st;
        Node* node = root;
        while(st.size()>0 || node != NULL)
        {
            if(node!=NULL)
            {
                st.push(node);
                node=node->left;
            }
            else// node == NULL
            {
                Node* temp = st.top();
                st.pop();

                v.push_back(temp->val);

                node=temp->right;
            }
        }
        return (v);
    }

void preorderTraversalRec(Node *root)
{
    if (root == NULL) 
        return;

    cout << root->val <<" ";  // work -> root
    preorderTraversalRec(root->left);  // call1 -> left
    preorderTraversalRec(root->right); // call2 -> right
}

void postorderTraversalRec(Node *root)
{
    if (root == NULL) 
        return;

    postorderTraversalRec(root->left);  // call1 -> left
    postorderTraversalRec(root->right); // call2 -> right
    cout << root->val <<" ";  // work -> root 
}
void inorderTraversalRec(Node *root)
{
    if (root == NULL) 
        return;

    inorderTraversalRec(root->left);  // call1 -> left
    cout << root->val <<" ";  // work -> root 
    inorderTraversalRec(root->right); // call2 -> right
}
int main()
{
    int arr[] = { 1,2,3,4,5,INT16_MIN,8,INT16_MIN,INT16_MIN,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node * root = constructTree(arr,n);
    
    inorderTraversalRec(root);
    cout<<endl;

    vector<int> v;
    inorderTraversalIterative(root,v);

    for(int i = 0 ; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}