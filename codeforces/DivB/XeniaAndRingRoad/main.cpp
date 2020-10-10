//solution is correct but time limit exceeded
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
ll tim=0;
vector<ll> workhouses;
struct node
{
    ll key;
    node *next;
};
node *head=new node;
ll k=1;
node* createnode()
{
    node *root=new node;
    root->key=++k;
    root->next=head;
    return root;
}
node* insertnode(node* root)
{
    if(root->next==NULL)
        root->next=createnode();
    else if(root->next==head)
        root->next=createnode();
    else
        root->next=insertnode(root->next);
    return root;
}
ll calc(ll k)
{
    ll d=0;
    while (head->key!=k)
    {
        d++;
        head=head->next;
    }
    return d;
}
int main()
{
    ll x;
    cin>>n>>m;
    head->key=1;
    head->next=NULL;
    for (ll j = 1; j <n; ++j) {
        head=insertnode(head);
    }
    for (ll i = 0; i <m ; ++i) {
        cin>>x;
        workhouses.push_back(x);
        tim+=calc(workhouses[i]);
    }
    cout<<tim;
    return 0;
}