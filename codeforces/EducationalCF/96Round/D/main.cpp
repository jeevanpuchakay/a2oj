#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    string s;
    cin >> n >> s;
    // n = s.size();
    vector<ll> nums;
    ll pos = 0, count = 0;
    while (pos < n)
    {
        count = 0;
        while (pos + 1 < n && s[pos] == s[pos + 1])
        {
            pos++;
            count++;
        }
        nums.push_back(count + 1);
        pos++;
    }
    count = 0, pos = 0;
    for (ll i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            continue;
        if (nums[i] > 1)
        {
            count++;
        }
        else
        {
            pos = max(i, pos);
            while (pos < nums.size() && nums[pos] <= 1)
            {
                pos++;
            }
            if (pos != nums.size())
            {
                count++;
                nums[pos]--;
            }
            else
            {
                count++;
                i++;
            }
        }
    }
    cout << count << endl;
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