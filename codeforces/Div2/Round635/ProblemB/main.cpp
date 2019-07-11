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
int main()
{
    ll cases;
    cin >> cases;
    sfor(0, cases, t)
    {
        ll h, n, m;
        cin >> h >> n >> m;
        ll temp;
        while ((h > 20) && (n))
        {
            temp = h;
            h /= 2;
            h += 10;
            if (temp == h)
                break;
                n--;
        }
        while (m && (h > 0))
        {
            h -= 10;
            m--;
        }
        if (h > 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}