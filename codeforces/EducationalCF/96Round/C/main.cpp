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
    cin >> n;
    vector<ll> nums;
    for (ll i = 0; i < n - 3; i++)
        nums.push_back(i + 1);
    nums.push_back(n - 1);
    nums.push_back(n - 2);
    nums.push_back(n);
    if (n == 2)
    {
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        ll big = n, small = n - 2;
        cout << 2 << endl;
        for (ll i = 0; i < n - 1; i++)
        {
            big = nums.back();
            nums.pop_back();
            small = nums.back();
            nums.pop_back();
            cout << big << " " << small << endl;
            nums.push_back((big + small) / 2);
        }
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