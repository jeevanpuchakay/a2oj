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
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1;
ll width, height;
ll placeInLeftBox(ll x1, ll y1, ll x2, ll y2, ll w, ll h)
{
    ll dx = 0, dy = 0;
    if (((abs(x2 - x1) + w) > width) || (height < h))
        return mod;
    if (w > x1)
        dx = w - x1;
    return dx;
}
ll placeInRightBox(ll x1, ll y1, ll x2, ll y2, ll w, ll h)
{
    ll dx = 0, dy = 0;
    if (((abs(x2 - x1) + w) > width) || (height < h))
        return mod;
    if (w > (width - x2))
        dx = w - (width - x2);
    return dx;
}
ll placeInBottomBox(ll x1, ll y1, ll x2, ll y2, ll w, ll h)
{
    ll dx = 0, dy = 0;
    if (((abs(y2 - y1) + h) > height) || (width < w))
        return mod;
    if (h > (y1))
        dy = h - y1;
    return dy;
}
ll placeInTopBox(ll x1, ll y1, ll x2, ll y2, ll w, ll h)
{
    ll dx = 0, dy = 0;
    if (((abs(y2 - y1) + h) > height) || (width < w))
        return mod;
    if (h > (height - y2))
        dy = h - (height - y2);
    return dy;
}
void solveCase(ll testCaseNum)
{
    cin >> width >> height;
    ll x1, y1, x2, y2, w, h;
    cin >> x1 >> y1 >> x2 >> y2 >> w >> h;
    ld dPlaceInLeftBox = placeInLeftBox(x1, y1, x2, y2, w, h);
    ld dPlaceInRightBox = placeInRightBox(x1, y1, x2, y2, w, h);
    ld dPlaceInBottomBox = placeInBottomBox(x1, y1, x2, y2, w, h);
    ld dPlaceInTopBox = placeInTopBox(x1, y1, x2, y2, w, h);
    ld ans = mod;
    ans = min(dPlaceInLeftBox, ans);
    ans = min(dPlaceInRightBox, ans);
    ans = min(dPlaceInBottomBox, ans);
    ans = min(dPlaceInTopBox, ans);
    if (ans == mod)
        cout << -1 << endl;
    else
        precision(7) << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}