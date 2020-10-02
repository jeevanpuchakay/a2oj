#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, k;
class comp
{
public:
    bool operator()(ll a, ll b)
    {
        return b <= a;
    }
};
void solveCase()
{
    cin >> n;
    ll nums[n], ans[n], top;
    priority_queue<ll, vector<ll>, comp> candidates;
    unordered_map<ll, ll> lastOccurence;
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ans[i] = -1;
        k = i + 1;
        for (ll j = 0; j < k; j++)
        {
            if (lastOccurence[nums[j]] == 0)
            {
                candidates.push(nums[j]);
            }
            lastOccurence[nums[j]] = j + 1;
        }
        for (ll j = k; j < n && candidates.empty() == false; j++)
        {
            if ((lastOccurence[nums[j]] >= (j - k + 1)) && ((lastOccurence[nums[j]] > 0)))
            {
                lastOccurence[nums[j]] = j + 1;
            }
            else
            {
                lastOccurence[nums[j]] = -1;
            }
            while (candidates.empty() == false && ((lastOccurence[candidates.top()] + k - 2) < (j)))
            {
                candidates.pop();
            }
        }

        if (candidates.empty() == false)
        {
            ans[i] = candidates.top();
        }

        while (candidates.empty() == false)
        {
            candidates.pop();
        }
        lastOccurence.clear();
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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