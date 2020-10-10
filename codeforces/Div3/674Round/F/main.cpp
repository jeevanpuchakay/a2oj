#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll a, b, c, ans, qLeft, qRight, cases, n;
// vector<ll> powerOf3(200009);
ll powerOf3[200009];
ll power3(ll pos)
{
    if (powerOf3[pos] == 0)
    {
        powerOf3[pos] = power3(pos / 2) % mod;
        powerOf3[pos] *= powerOf3[pos];
        powerOf3[pos] %= mod;
        powerOf3[pos] *= (pos % 2 == 1 ? 3 : 1);
        return powerOf3[pos] = powerOf3[pos] % mod;
    }
    return powerOf3[pos] = powerOf3[pos] % mod;
}
void solveCase()
{
    cin >> n;
    string s;
    cin >> s;
    a = b = c = ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'c')
            c++;
        else if (s[i] == '?')
            qRight++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            // c--;
            qRight--;
            if (a > 0 && c > 0)
            {
                ans += ((a) * ((c * power3(max(qLeft + qRight, 0))) % mod)) % mod;
            }
            ans %= mod;
            if (qLeft > 0 && c > 0)
            {
                ans += ((qLeft) * ((c * power3(max(qLeft + qRight - 1, 0))) % mod)) % mod;
            }
            ans %= mod;
            if (qRight > 0 && a > 0)
            {
                ans += ((a) * ((qRight * power3(max(qLeft + qRight - 1, 0))) % mod)) % mod;
            }
            ans %= mod;
            if (qRight > 0 && qLeft > 0)
            {
                ans += ((qLeft) * ((qRight * power3(max(qLeft + qRight - 2, 0))) % mod)) % mod;
            }
            ans %= mod;
            qLeft++;
        }
        else if (s[i] == 'a')
        {
            a++;
        }
        else if (s[i] == 'b')
        {
            if (a > 0 && c > 0)
            {
                ans += ((a) * ((c * power3(max(qLeft + qRight, 0))) % mod)) % mod;
            }
            ans %= mod;
            if (qLeft > 0 && c > 0)
            {
                ans += ((qLeft) * ((c * power3(max(qLeft + qRight - 1, 0))) % mod)) % mod;
            }
            ans %= mod;
            if (qRight > 0 && a > 0)
            {
                ans += ((a) * ((qRight * power3(max(qLeft + qRight - 1, 0))) % mod)) % mod;
            }
            ans %= mod;
            if (qRight > 0 && qLeft > 0)
            {
                ans += ((qLeft) * ((qRight * power3(max(qLeft + qRight - 2, 0))) % mod)) % mod;
            }
            ans %= mod;
        }
        else if (s[i] == 'c')
        {
            c--;
        }
    }
    cout << ans << '\n';
}

int main()
{

    // cin >> cases;

    powerOf3[0] = 1;
    cases = 1;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}