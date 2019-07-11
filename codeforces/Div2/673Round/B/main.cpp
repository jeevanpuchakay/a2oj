#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, T, countOfHalf, halfValue;
void solveCase()
{
    cin >> n >> T;
    ll nums[n];
    bool evenT = T % 2 == 0;
    halfValue = T / 2;
    countOfHalf = 0;
    unordered_map<ll, int> color;
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
        color[nums[i]] = 1;
        if (evenT && (nums[i] == halfValue))
        {
            countOfHalf++;
        }
    }
    countOfHalf /= 2;
    for (ll i = 0; i < n; i++)
    {
        if (color[T - nums[i]] == color[nums[i]])
        {
            color[T - nums[i]] ^= 1;
        }
    }

    if (!evenT)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << color[nums[i]] << " ";
        }
        cout << '\n';
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (nums[i] != halfValue)
                cout << color[nums[i]] << " ";
            else if (countOfHalf > 0)
            {
                cout << 1 << " ";
                countOfHalf--;
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << '\n';
    }
}

int main()
{

    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}