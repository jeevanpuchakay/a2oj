#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
ll maxHeight;

void levelOrderTraversal(TreeNode* a,ll height){
    if(maxHeight<=height)return;
    adjlist[height].pb(a->val);
    if(a->left!=NULL)
    levelOrderTraversal(a->left,height+1);
    if(a->right!=NULL)
    levelOrderTraversal(a->right,height+1);

    return;

}

ll getHeight(TreeNode *a){
    ll left=(a->left!=NULL)?(1+getHeight(a->left)):1;
    ll right=(a->right!=NULL)?(1+getHeight(a->right)):1;
    return max(left,right);
}






vector<vector<int> > Solution::levelOrder(TreeNode* a) {
    maxHeight=getHeight(a);
    adjlist=vector<vector<int> > (maxHeight);
    levelOrderTraversal(a,0);
    return adjlist;
}