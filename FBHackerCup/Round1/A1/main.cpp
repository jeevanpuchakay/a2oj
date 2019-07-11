#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> ladjlist;
ll lmax(ll x, ll y) { return (x > y) ? x : y; }
ll lmin(ll x, ll y) { return (x > y) ? y : x; }
ll mod = 1000000007;
int main()
{
    ll t, n, k, w, al, bl, cl, dl, ah, bh, ch, dh, lastl, lastPer, ans, temp;
    cin >> t;
    for (ll cases = 1; cases <= t; cases++)
    {
        cin >> n >> k >> w;
        ll leftI[n], h[n];
        for (ll i = 0; i < k; i++)
        {
            cin >> leftI[i];
        }
        cin >> al >> bl >> cl >> dl;
        for (ll i = 0; i < k; i++)
        {
            cin >> h[i];
        }
        cin >> ah >> bh >> ch >> dh;
        lastl = -w - 2, lastPer = 0, ans = 1;
        for (ll i = 0; i < n; i++)
        {
            if (i >= k)
            {
                leftI[i] = ((leftI[i - 2] * al) + bl * leftI[i - 1] + cl) % dl;
                h[i] = ((h[i - 2] * ah) + bh * h[i - 1] + ch) % dh;
            }
            if ((lastl + w) >= (leftI[i]))
            {
                temp = h[i] > h[i - 1] ? (2 * (h[i] - h[i - 1]) + lastl + w - leftI[i]) : 0 + 2 * (leftI[i]-lastl);
            }
            else
            {
                temp = 2 * (w + h[i]);
            }
            lastPer += temp;
            ans *= (lastPer % mod);
            ans %= mod;
            lastl = leftI[i];
            cout << lastPer << " ";
        }
        cout << endl;
        cout << "Case "
             << "#" << cases << ": " << ans << endl;
    }
    return 0;
}