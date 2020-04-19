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

        ll n;
        cin >> n;
        vi a(n, 0), b(n, 0);
        sfor(0, n, i) cin >> a[i] >> b[i];
        ll start = 0;
        ll ansBullets = mod;
        while (start < n)
        {
            ll damageLeft = 0;
            ll tempBullets = 0;
            ll pos = start % n;
            tempBullets += a[start];
            damageLeft = b[start];
            pos++;
            while (pos % n != start)
            {
                if (damageLeft <= a[pos % n])
                {
                    tempBullets += (a[pos % n] - damageLeft);
                }
                damageLeft = b[pos % n];
                pos++;
            }
            start++;
            ansBullets = min(ansBullets, tempBullets);
        }
        cout<<ansBullets<<endl;
    }
    return 0;
}