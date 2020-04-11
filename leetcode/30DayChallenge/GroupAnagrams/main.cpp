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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

class Solution
{
public:
    int charSum(string s, int n)
    {
        int ans = 0;
        sfor(0, n, i) ans += (s[i] - 'a');
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, int> cize;
        int n = strs.sz;
        if (!n)
            return ans;
        sfor(0, n, i)
        {
            int stringSize = strs[0].sz;
            string keyValue = strs[0];
            sort(keyValue.bg, keyValue.ed);
            if (cize[keyValue])
            {
                ans[cize[keyValue]-1].pb(strs[i]);
            }else{
                cize[keyValue]=ans.sz+1;
                vector<string> temp;
                temp.pb(strs[i]);
                ans.pb(temp);
            }
        }
        for (auto pos = ans.bg; pos != ans.ed; pos++)
        {
            sort((*pos).bg, (*pos).ed);
        }
        sort(ans.bg, ans.ed);
        return ans;
    }
};