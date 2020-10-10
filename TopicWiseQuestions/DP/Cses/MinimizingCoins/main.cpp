#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, x, y, left, right, curr, prev, next, sum, temp;
void solveCase()
{
    cin >> n >> sum;
    vector<ll> minNoOfCoins(sum + 1, mod), coins;
    minNoOfCoins[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        coins.push_back(temp);
        if (temp <= sum)
            minNoOfCoins[temp] = 1;
    }
    for (ll i = 2; i <= sum; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (coins[j] <= i)
                minNoOfCoins[i] = min(minNoOfCoins[i], minNoOfCoins[i - coins[j]] + 1);
        }
    }
    cout << (minNoOfCoins[sum] == mod ? -1 : minNoOfCoins[sum]) << endl;
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