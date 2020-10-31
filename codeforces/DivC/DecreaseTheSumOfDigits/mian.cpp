#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long unsigned int lls;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1; // n, sum, m;
ll x, y;
lls getSum(lls n)
{
    lls currSum = 0;
    while (n > 0)
    {
        currSum += n % 10;
        n /= 10;
    }
    return currSum;
}
void solveCase(ll testCaseNum)
{
    lls n, cn, ans = 0, toAdd, digitPos = 1, sum, currSum = 0, currDigit;
    cin >> n >> sum;
    currSum = getSum(n);
    while (currSum > sum)
    {
        currDigit = (n % (digitPos * 10)) / (digitPos);
        if (currDigit != 0)
        {
            toAdd = (10 - currDigit) * digitPos;
            ans += toAdd;
            n += toAdd;
            currSum = getSum(n);
        }
        // cout << "n=" << n << " "
        //      << "CurrSum=" << currSum << " " << digitPos << endl;
        digitPos *= 10;
    }
    cout << ans << endl;
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