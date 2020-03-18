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

int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    ll n = A.size();
    if (!n)
        return 0;
    adjlist = vector<vector<ll>>(n, vi(n, mod));
    sfor(0, n, i)
    {
        sfor(i + 1, n, j)
        {
            ld a = A[i], b = B[i];
            ld c = A[j], d = B[j];
            if ((a - b) == 0)
            {
                adjlist[i][j] = adjlist[j][i] = abs(d - b);
            }
            else if (abs(((d - b) / (c- a))) == 1)
            {
                adjlist[i][j] = adjlist[j][i] = abs(d - b);
            }
            else if (abs(((d - b) / (c- a))) < 1)
            {
                adjlist[i][j] = adjlist[j][i] = abs(c - a);
            }
            else if (abs(((d - b) / (c- a))) > 1)
            {
                adjlist[i][j] = adjlist[j][i] = abs(d- b);
            }
        }
    }
    

}
