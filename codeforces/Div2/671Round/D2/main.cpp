#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n;
void solveCase()
{
    cin >> n;
    int prices[n];
    for (ll i = 0; i < n; i++)
        cin >> prices[i];
    sort(prices, prices + n);
    ll start = 0, end = n, mid, pos1, pos2, ans;
    bool possible;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (2 * mid + 1 > n)
        {
            end = mid - 1;
            continue;
        }
        possible = true;
        pos1 = n - mid - 1, pos2 = 0;
        vector<ll> arrangement;
        while (pos1 < n)
        {
            arrangement.push_back(prices[pos1++]);
            if (pos2 < (n - mid - 1))
                arrangement.push_back(prices[pos2++]);
        }
        while (pos2 < (n - mid - 1))
        {
            arrangement.push_back(prices[pos2++]);
        }
        for (ll i = 1; i < 2 * mid; i += 2)
        {
            if (arrangement[i - 1] <= arrangement[i] || arrangement[i] >= arrangement[i + 1])
            {
                possible = false;
                break;
            }
        }
        if (possible == false)
        {
            // start = mid + 1;
            end = mid - 1;
        }
        else
        {
            ans = 2 * mid + 1;
            start = mid + 1;
        }
    }
    cout << ans / 2 << '\n';
    pos1 = n - ans / 2 - 1, pos2 = 0;
    for (ll i = 0; pos1 < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << prices[pos1++] << " ";
        }
        else
        {
            cout << prices[pos2++] << " ";
        }
    }
    for (; pos2 < (n - ans / 2 - 1);)
    {
        cout << prices[pos2++] << " ";
    }

    cout << '\n';
}

int main()
{

    // cin >> cases;
    cases = 1;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}