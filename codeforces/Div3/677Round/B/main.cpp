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
ll cases = 1, n, sum, m;
ll x, y;
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> moveLeft(n), moveRight(n);
    ll ans = 0, right = 0, left = 0, leftPos = 0, rightPos = n - 1, copyOfLeftPos;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        moveLeft[i] = moveRight[i] = x;
    }
    while (leftPos < n && moveLeft[leftPos] == 0)
        leftPos++;
    while (rightPos >= 0 && moveLeft[rightPos] == 0)
        rightPos--;
    copyOfLeftPos = leftPos;
    while (leftPos < n && leftPos < rightPos)
    {
        /* code */
        if (moveLeft[leftPos] == 0)
            left++;
        leftPos++;
    }
    while (copyOfLeftPos < rightPos)
    {
        if (moveLeft[rightPos] == 0)
            right++;
        rightPos--;
    }
    ans = min(left, right);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}