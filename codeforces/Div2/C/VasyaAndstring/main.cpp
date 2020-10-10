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
    ll n;
    ll k;
    ll ans = 0;
    cin >> n >> k;
    vi pos;
    string s;
    cin >> s;
    ll l = 0, r = 1;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    ll count = 0;
    ll as = 0, bs = 0;
    sfor(0, n, i)
    {
        if (s[i] == 'a')
            as++;
        else
            bs++;
    }
    ll start = 0;

    if ((!as) || (!bs))
    {
        cout << n << endl;
        return 0;
    }
    char check = as > bs ? 'b' : 'a';
    while (start < n && check != s[start])
        start++;
    l = start, r = start;
    // ll ans = 0;
    count = 1;
    ll prevL = l;
    //cout<<"start "<<start<<" check "<<check<<endl;
    if (!k)
    {
        ll last = -1, cont = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == check)
            {
                cont = max(cont, i - last);
                last = i;
            }
        }
        cont = max(cont, n - last - 1);
        cout << cont << endl;
        return 0;
    }
    while (r < n && l < n)
    {
        /* code */
        while (count <= k && r < n)
        {
            /* code */ r++;
            if (r < n && s[r] == check)
                count++;
        }
        if (l == start)
        {
            ans = max(ans, r);
        }
        else
        {
            ans = max(ans, r - prevL);
        }
        prevL = l + 1;
        l++;
        while (l < n && s[l] != check)
            l++;
    }

    cout << ans;
}