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
int main()
{

    ll n, m;
    cin >> n >> m;
    vi segTree(1 << (n + 1), 0);
    ll start = 1 << n;
    sfor(start, 2 * start, i)
            cin >>
        segTree[i];
    start /= 2;
    bool oper = true;
    while (start)
    {
        if (oper)
        {
            sfor(start, 2 * start, i)
            {
                segTree[i] = segTree[2 * i] | segTree[2 * i + 1];
            }
        }
        else
        {
            sfor(start, 2 * start, i)
            {
                segTree[i] = segTree[2 * i] ^ segTree[2 * i + 1];
            }
        }
        oper = !oper;
        start /= 2;
    }

    sfor(0, m, mof)
    {
        ll idx;
        cin >> idx;
        start = 1 << n;
        start += idx - 1;
        cin >> segTree[start];
        start /= 2;
        bool oper = true;
        while (start)
        {
            if (oper)
            {
                segTree[start] = segTree[2 * start] | segTree[2 * start + 1];
            }
            else
            {
                segTree[start] = segTree[2 * start] ^ segTree[2 * start + 1];
            }
            oper = !oper;
            start /= 2;
        }
        cout << segTree[1] << endl;
    }
    return 0;
}
