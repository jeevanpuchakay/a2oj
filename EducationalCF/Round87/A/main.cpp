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
    ll cases;
    cin >> cases;
    ll a, b, c, d;
    ll totTime = 0, remTime = 0;
    sfor(0, cases, t)
    {
        cin >> a >> b >> c >> d;
        totTime = remTime = 0;
        if (a <= b)
        {
            cout << b << endl;
            continue;
        }
        totTime = b;
        remTime = a - b;
        if (c <= d)
        {
            cout << -1 << endl;
            continue;
        }
        totTime += ((remTime / (c - d)) + ((remTime % (c - d)) > 0)) * (c);
        cout << totTime << endl;
    }
    return 0;
}
