//using two queues

#include<iostream>
#include<queue>
using namespace std;

struct Node{
    Node *left,*right;
    int data;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

void LevelOrder(Node *root)
{
    if(root==NULL) return;
    queue<Node*>q1,q2;
    q1.push(root);
    while(!q1.empty()||!q2.empty())
    {
        while(!q1.empty())
        {
            if(q1.front()->left!=NULL)
                q2.push(q1.front()->left);
            if(q1.front()->right!=NULL)
                q2.push(q1.front()->right);
            cout<<q1.front()->data<<" ";
            q1.pop();
        }
        cout<<endl;
        while(!q2.empty())
        {
            if(q2.front()->left!=NULL)
                q1.push(q2.front()->left);
            if(q2.front()->right!=NULL)
                q1.push(q2.front()->right);
            cout<<q2.front()->data<<" ";
            q2.pop();
        }
        cout<<endl;
    }

}
int main()
{
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    LevelOrder(root);
    return 0;
}
