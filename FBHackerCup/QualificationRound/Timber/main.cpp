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
    ll cases, n, lastI, x, y, maxLen, tempMaxLen;
    bool lastHTaken;
    vector<pair<ll, ll>> coOrdinates;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
        sfor(0, n, i)
        {
            cin >> x >> y;
            coOrdinates.push_back({x, y});
        }
        maxLen = tempMaxLen = 0;
        sort(coOrdinates.bg, coOrdinates.ed);
        sfor(0, n, i)
        {
            tempMaxLen = 0;
            lastI = i;
            lastHTaken = false;
            sfor(i + 1, n, j)
            {
                if ((!lastHTaken) && ((coOrdinates[j].first - coOrdinates[lastI].first) == coOrdinates[lastI].second))
                {
                    tempMaxLen += (coOrdinates[j].first - lastI);
                    maxLen = max(maxLen, tempMaxLen);
                    lastI = coOrdinates[j].first;
                }
                else if ((coOrdinates[j].first - coOrdinates[lastI].first) == coOrdinates[j].second)
                {
                    tempMaxLen += (coOrdinates[j].first - lastI);
                    maxLen = max(maxLen, tempMaxLen);
                    lastI = coOrdinates[j].first;
                    lastHTaken = true;
                }
                else if ((!lastHTaken) && ((coOrdinates[j].first - coOrdinates[lastI].first) == (coOrdinates[j].second + coOrdinates[lastI].second)))
                {
                    tempMaxLen += (coOrdinates[j].first - lastI);
                    maxLen = max(maxLen, tempMaxLen);
                    lastI = coOrdinates[j].first;
                    lastHTaken = true;
                }
            }
        }
        cout << "Case #" << t + 1 << ": " << maxLen << endl;
    }
    return 0;
}