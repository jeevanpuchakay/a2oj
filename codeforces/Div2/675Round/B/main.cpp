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
ll temp, left, right, curr, prev, next;
void solveCase()
{
    ll m, sum = 0, ans = 0;
    cin >> n >> m;
    ll nums[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < m / 2; j++)
        {
            sum = 0;
            ll temp1 = 0, temp2 = mod;
            sum = nums[i][j];
            temp1 = abs(sum - nums[i][j]) + abs(sum - nums[i][m - 1 - j]) + abs(sum - nums[n - 1 - i][j]) + abs(sum - nums[n - 1 - i][m - 1 - j]);
            temp2 = temp1;
            sum = nums[i][m - 1 - j];
            temp1 = abs(sum - nums[i][j]) + abs(sum - nums[i][m - 1 - j]) + abs(sum - nums[n - 1 - i][j]) + abs(sum - nums[n - 1 - i][m - 1 - j]);
            temp2 = min(temp1, temp2);
            sum = nums[n - 1 - i][j];
            temp1 = abs(sum - nums[i][j]) + abs(sum - nums[i][m - 1 - j]) + abs(sum - nums[n - 1 - i][j]) + abs(sum - nums[n - 1 - i][m - 1 - j]);
            temp2 = min(temp1, temp2);
            sum = nums[n - 1 - i][m - 1 - j];
            temp1 = abs(sum - nums[i][j]) + abs(sum - nums[i][m - 1 - j]) + abs(sum - nums[n - 1 - i][j]) + abs(sum - nums[n - 1 - i][m - 1 - j]);
            temp2 = min(temp1, temp2);
            ans+=temp2;
        }
    }
    if (n % 2 == m % 2 && m % 2 == 1)
    {
        for (ll i = 0; i < n / 2; i++)
        {
            ans += abs(nums[i][m / 2] - nums[n - 1 - i][m / 2]);
        }
        for (ll j = 0; j < m / 2; j++)
        {
            ans += abs(nums[n / 2][j] - nums[n / 2][m - 1 - j]);
        }
    }
    else if (n % 2 == 1)
    {
        for (ll j = 0; j < m / 2; j++)
        {
            ans += abs(nums[n / 2][j] - nums[n / 2][m - 1 - j]);
        }
    }
    else if (m % 2 == 1)
    {
        for (ll i = 0; i < n / 2; i++)
        {
            ans += abs(nums[i][m / 2] - nums[n - 1 - i][m / 2]);
        }
    }
    cout << ans << endl;
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