#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int>> adjlist;
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
#define vi vector<int>
#define vc vector<char>
#define vinv vector<vector<int>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

int Solution::maxSubArray(const vector<int> &a)
{
    int n = a.size();
    int mas = 0;

    adjlist = vinv(n, vi(n, 0));
    sfor(0, n, i)
    {
        adjlist[i][i] = a[i];
        mas = max(a[i], mas);
    }
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            adjlist[i][j] = adjlist[i][j - 1] + a[j];
            mas = max(adjlist[i][j], mas);
        }
    }

    return mas;
}
