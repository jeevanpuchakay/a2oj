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

// //   Definition for a binary tree node.
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
class Solution
{
    int ans = INT_MIN;
    int max3(int x, int y, int z)
    {
        return x > y ? (x > z ? x : z) : (y > z ? y : z);
    }
    int getMaxSumPath(TreeNode *root)
    {
        if (root->right == NULL && root->left == NULL)
        {
            ans = max(ans, root->val);
            return root->val;
        }
        int left = 0, right = 0;
        int tempAns = INT_MIN;
        if (root->right == NULL)
        {
            left = getMaxSumPath(root->left);
            tempAns = max(tempAns, root->val);
            ans = max(left, ans);
            tempAns = max(left + root->val, tempAns);
            ans = max(tempAns, ans);
            return tempAns;
        }
        if (root->left == NULL)
        {
            right = getMaxSumPath(root->right);
            tempAns = max(tempAns, root->val);
            ans = max(right, ans);
            tempAns = max(right + root->val, tempAns);
            ans = max(tempAns, ans);
            return tempAns;
        }
        right = getMaxSumPath(root->right);
        left = getMaxSumPath(root->left);
        ans = max3(ans, right, left);
        tempAns = max3(left + root->val, root->val + right, root->val);
        ans = max(tempAns, ans);
        ans=max(ans,left+right+root->val);
        return tempAns;
    }

public:
    int maxPathSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int temp = getMaxSumPath(root);
        return max(temp, ans);
    }
};
