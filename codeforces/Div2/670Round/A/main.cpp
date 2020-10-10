#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
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
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)

int main()
{
    ll start, ans, n, cases, x;
    bool first = false;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
        unordered_map<ll, ll> freq;
        ans = 0;
        start = 0;
        first = false;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            freq[x]++;
        }
        for (; 1; start++)
        {
            if (freq[start] == 1)
            {
                if (first)
                {
                    // ans += start;
                }
                else
                {
                    ans += start;
                    first = true;
                }
            }
            else if (freq[start] == 0)
            {
                // first=true;
                if (first == false)
                    ans += 2 * start;
                else
                    ans += start;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}