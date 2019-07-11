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

// //Definition for a binary tree node.
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution
{
public:
    int maxAnswer = 0;
    pair<int, int> GetLeftRightMax(TreeNode *root)
    {
        if ((root->left == NULL) && (root->right == NULL))
        {
            return {0, 0};
        }
        else if (root->left == NULL)
        {
            pair<int, int> temp1 = GetLeftRightMax(root->right);
            pair<int, int> temp = {0, 0};
            temp.first = 0;
            temp.second = 1 + max(temp1.first, temp1.second);
            maxAnswer = max(maxAnswer, abs(temp.second));
            return temp; //second=
        }
        else if (root->right == NULL)
        {
            pair<int, int> temp1 = GetLeftRightMax(root->left);
            pair<int, int> temp = {0, 0};
            temp.first=1+max(temp1.first,temp1.second);
            maxAnswer = max(maxAnswer, abs(temp.first));
            return temp;
        }
        else
        {
            pair<int, int> temp1 = GetLeftRightMax(root->left);
            pair<int, int> temp2 = GetLeftRightMax(root->right);
            pair<int, int> temp;
            temp.first = 1 + max(temp1.first, temp1.second);
            temp.second = 1 + max(temp2.first, temp2.second);
            maxAnswer = max(maxAnswer, abs(temp.first + temp.second));
            return temp;
        }
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        pair<int, int> ans = GetLeftRightMax(root);
        return maxAnswer;
    }
};