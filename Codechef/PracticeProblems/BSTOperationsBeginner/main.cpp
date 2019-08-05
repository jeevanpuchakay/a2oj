#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    int pos;
    node* left;
    node* right;
};
node*createnode(int b)
{
    node*temp=new node;
    temp->key=b;
    temp->left=temp->right=NULL;
    return temp;
}
node* add(node* root,int b,int pos)
{
     if(root==NULL)
     {
         root=createnode(b);
         cout<<pos<<endl;
     }
     else if(root->key<=b)
     {
         root->right=add(root->right,b,2*pos+1);
     }
     else if(root->key>b)
     {
         root->left=add(root->left,b,2*pos);
     }
     return root;
}
node* del(node* root,int b)
{
     if(root->key>b)
     {
         root->right=del(root->right,b);
     }
     else if(root->key<b)
     {
         root->left=del(root->left,b);
     }
     else if(root->key==b)
     {
       cout<<root->pos<<endl;

     }
     return root;
}
void printinorder(node*root)
{
    if(root==NULL)
        return;
    printinorder(root->left);
    cout<<root->key;
    printinorder(root->left);
}
int main()
{
    node*root=NULL;
    int n;
    cin>>n;
    char a;
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        if(a=='i')
        {
            root=add(root,b);
        }
        else if(a=='d')
        {
            del(root,b);
        }
    }
    printinorder(root);
    return 0;
}