#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

void Reverse(Node *root)
{
    if(root==NULL) return;
    queue<Node*>q;
    stack<Node*>s;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        q.pop();
        s.push(root);
        if(root->right)
            q.push(root->right);
        if(root->left)
            q.push(root->left);
    }
    while(!s.empty()){
        cout<<s.top()->data<<" ";
        s.pop();
    }
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    Reverse(root);
    return 0;
}
