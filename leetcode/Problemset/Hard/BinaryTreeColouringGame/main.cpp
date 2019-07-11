#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
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
 * Definition for a binary tree node.*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int all;
    int target;
    int count(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + count(root->left) + count(root->right);
    }
    bool goDown(TreeNode *root)
    {
        if (root == NULL)
            return false;
        if (root->val == target)
        {
            int left = count(root->left);
            int right = count(root->right);
            int up = all - 1 - left - right;
            if (left > right + up + 1)
                return true;
            if (right > left + up + 1)
                return true;
            if (up > right + left + 1)
                return true;
            return false;
        }
        return goDown(root->left) || goDown(root->right);
    }

    bool btreeGameWinningMove(TreeNode *root, int n, int x)
    {
        all = n;
        target = x;
        return goDown(root);
    }
};