

#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
#define min(x, y) (x > y) ? y : x
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
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        string s;
        cin >> s;
        imap ones, zeros;
        ll a = 0, b = 0;
        vi track(n + 1, 0);
        ll maxa = 0;
        sfor(0, n - 1, i)
        {
            if (s[i] == '1')
            {
                a++;
                if (i && s[i - 1] != '1')
                {
                    track[b]++;
                    maxa = max(maxa, b);
                    b = 0;
                }
            }
            else
            {
                b++;
                if (i && s[i - 1] != '0')
                {
                    track[a]++;
                    maxa = max(maxa, a);
                    a = 0;
                }
            }
        }
        if (s[n - 1] == '1')
        {

            a++;
            track[a]++;
            maxa = max(maxa, a);
            a = 0;
            if (b)
            {
                track[b]++;
                maxa = max(maxa, b);
                b = 0;
            }
        }
        else
        {
            b++;
            track[b]++;
            maxa = max(maxa, b);
            b = 0;
            if (a)
            {
                track[a]++;
                maxa = max(maxa, a);
                a = 0;
            }
        }
        ll start=maxa;
        while (k>0&&start>0)
        {
            /* code */
            if(start>=3){
                track[]

            }
        }
        cout<<start<<endl;
        
    }

    return 0;
}
