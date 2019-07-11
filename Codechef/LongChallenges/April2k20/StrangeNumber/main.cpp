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
bool isPrime(ll n)
{
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    ll cases;
    cin >> cases;
    sfor(0, cases, t)
    {
        ll x, k;
        cin >> x >> k;
        if (k > x)
        {
            cout << 0 << endl;
            return 0;
        }
        ll ans;
        if (k)
            ans = 2, k--;
        else
            ans = 1;
        x--;
        for (ll i = 3; x;)
        {
            bool isIt = isPrime(i);
            if (isIt && k)
            {
                ans *= i;
                k--;
                x--;
                i++;
                if (x)
                {
                    ans *= i;
                    i++;
                    x--;
                }
            }
            else if (isIt)
            {
                i++;
                if (x)
                {
                    ans *= i;
                    i++;
                    x--;
                }
            }
            else
            {
                ans *= i;
                i++;
                x--;
            }
        }
    }
    return 0;
}