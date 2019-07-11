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

vector<vector<int>> Solution::prettyPrint(int a)
{
    int n = 2 * a - 1;
    int start = 0, end = n - 1;
    adjlist = vinv(n, vi(n, 0));
    while (start <= end)
    {
        sfor(start, end + 1, i)
        {
            adjlist[start][i] = a;
        }
        sfor(start, end + 1, i)
        {
            adjlist[i][start] = a;
        }
        sfor(start, end + 1, i)
        {
            adjlist[n - 1 - start][i] = a;
        }
        sfor(start, end + 1, i)
        {
            adjlist[i][n - 1 - start] = a;
            ī
        }
        a--;
        start++;
        end--;
    }
    return adjlist;
}
