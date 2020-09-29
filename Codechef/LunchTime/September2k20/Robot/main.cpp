#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, r, c;
void solveCase()
{
    cin >> r >> c;
    string ans = "UR", left = "", right = "", down = "R";
    for (ll i = 1; i < r; i++)
        right += 'R', left += 'L';
    if (r == 1 && c == 1)
    {
        cout << "U" << '\n';
        return;
    }
    else if (r == 1)
    {
        cout << ans + string(c - 2, 'U') << '\n';
        return;
    }
    else if (c == 1)
    {
        cout << ans + string(r - 2, 'R') << '\n';
        return;
    }
    // if (c > 1)
    //     ans += right;
    // // if (r != 1)
    // if (r > 1)
    //     ans += 'R';
    for (ll i = 1; i < c; i++)
    {
        ans += (i % 2 == 1 ? right : left);
        // if (i != (r-1))
        ans += 'U';
    }
    ans += (string(r - 2, c % 2 == 0 ? 'L' : 'R'));
    cout << ans << '\n';
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