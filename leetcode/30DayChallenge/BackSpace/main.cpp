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
    bool backspaceCompare(string s, string t)
    {
        int count = 0;
        int n = s.sz;
        string temp1 = "", temp2 = "";
        rfor(n - 1, 0, i)
        {
            if (s[i] == '#')
            {
                count++;
            }
            else if (count)
            {
                s[i] = '1';
                count--;
            }
            else
            {
                temp1 = s[i] + temp1;
            }
        }
        count = 0;
        int m=t.sz;
        rfor(m - 1, 0, i)
        {
            if (t[i] == '#')
            {
                count++;
            }
            else if (count)
            {
                t[i] = '1';
                count--;
            }
            else
            {
                temp2 = t[i] + temp2;
            }
        }
        if (temp1 == temp2)
            return true;
        return false;
    }
};