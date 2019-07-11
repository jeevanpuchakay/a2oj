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

class Solution
{
public:
    int totalFruit(vector<int> &tree)
    {
        int n = (int)tree.sz;
        if (n <= 2)
            return n;
        int one = -1, two = -1;
        int last = 0, count = 0, ans = 2;
        sfor(0, n, i)
        {
            if (one == -1)
            {
                one = tree[i];
                count++;
                last = i;
            }
            else if (two == -1)
            {
                count++;
                if (one != tree[i])
                {
                    two = tree[i];
                    last = i;
                }
            }
            else if ((one != tree[i]) && (two != tree[i]))
            {
                if (tree[last] == one)
                {
                    two = tree[i];
                    count = i - last + 1;
                    last = i;
                }
                else
                {
                    one = tree[last];
                    two = tree[i];
                    count = i - last + 1;
                    last = i;
                }
                // cout<<i<<" a "<<last<<endl;
            }
            else
            {
                count++;
                if (tree[last] != tree[i])
                    last = i;
                // cout<<i<<" b "<<endl;
            }
            cout << one << " " << two << endl;
            ans = max(count, ans);
        }
        return ans;
    }
};