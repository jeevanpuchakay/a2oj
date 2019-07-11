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
        string s;
        cin >> s;
        string temp = s;
        ll n = s.sz;
        sfor(n / 2, n, i)
        {
            temp[i] = temp[n - 1 - i];
        }
        if (temp > s)
        {
            cout << temp << endl;
        }
        else
        {
            s = temp;
            for (ll i = (n - 1) / 2; i >= 0; i--)
            {
                if (s[i] != '9')
                {
                    s[i] += 1;
                    break;
                }
                s[i] = '0';
            }
            sfor(n / 2, n,i)
                s[i] = s[n - i - 1];
            //9 9 9 9---10001
            //0 0 0 0
            //1 0 0 0 1
            if (s[0] == '0')
            {
                s[0] = '1';
                s += '1';
            }
            cout << s << endl;
        }
    }
    return 0;
}