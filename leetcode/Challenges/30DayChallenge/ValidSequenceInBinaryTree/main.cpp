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
    string target = "";
    int n;
    TreeNode *Top;

public:
    bool findString(TreeNode *root, int pos)
    {
        if (root == NULL)
        {
            return false;
        }
        if (root->val == (target[pos] - '0'))
        {
            if (pos + 1 == n)
            {
                if ((root->left == NULL) && (root->right == NULL))
                    return true;
                return false;
            }
            if (findString(root->left, pos + 1))
            {
                return true;
            }
            return findString(root->right, pos + 1);
        }
        return false;
    }
    bool isValidSequence(TreeNode *root, vector<int> &arr)
    {
        n = (int)arr.sz;
        target = "";
        sfor(0, n, i)
        {
            target += ('0' + arr[i]);
        }

        return findString(root, 0);
    }
};