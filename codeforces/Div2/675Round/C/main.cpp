#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum;
ll x, y;
ll temp, leftLen, rightLen, curr, prev, next, value, noOfDeleted;
vector<ll> power10, prefSum;
void solveCase()
{
    string s;
    cin >> s;
    n = s.size();
    power10 = vector<ll>(n + 1, 0);
    prefSum = vector<ll>(n + 1, 0);
    power10[0] = 1, power10[1] = 10;
    prefSum[0] = 1, prefSum[1] = 21;
    for (ll i = 2; i <= n; i++)
    {
        power10[i] = (((power10[i / 2] * power10[i / 2]) % mod) * (i % 2 == 1 ? 10 : 1)) % mod;
        prefSum[i] = prefSum[i - 1] + (power10[i] * (i + 1)) % mod;
        prefSum[i] %= mod;
    }
    ll last = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            continue;
        leftLen = i;
        leftLen = ((((leftLen) * (leftLen + 1)) / 2) % mod);
        value = (power10[n - 1 - i] * (s[i] - '0')) % mod;
        sum += (value * leftLen) % mod;
        sum %= mod;
        if (n - i - 1 >= 1)
            sum += ((s[i] - '0') * (prefSum[(n - i - 2)]));
        sum %= mod;
        
        // cout << i << " 1 :" << sum << endl;
        // for (ll j = i + 1; j < n; j++)
        // {
        //     value = (power10[n - 1 - j] * (s[i] - '0')) % mod;
        //     noOfDeleted = j - i;
        //     rightLen = n - 1 - i - noOfDeleted + 1;
        //     sum += (value * (rightLen)) % mod;
        //     sum %= mod;
        // }
        // cout << i << " 2: " << sum << endl;
    }
    cout << sum << endl;
}

int main()
{

    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}