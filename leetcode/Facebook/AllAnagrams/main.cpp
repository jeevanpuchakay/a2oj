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
    vector<int> findAnagrams(string s, string p)
    {
        int patLen = (int)p.sz;
        int txtLen = (int)s.sz;
        vector<int> ans;
        if (patLen > txtLen)
            return ans;
        int first = 0, last = patLen;
        vector<int> patCont(26, 0);
        vector<int> dummy(26, 0);
        sfor(0, patLen, i)
        {
            patCont[p[i] - 'a']++;
            dummy[s[i] - 'a']++;
        }
        if (dummy == patCont)
            ans.pb(first);
        while (last < txtLen)
        {
            dummy[s[first]-'a']--;
            first++;
            dummy[s[last]-'a']++;
            if (dummy == patCont)
                ans.pb(first);
            last++;
        }
        return ans;
    }
};