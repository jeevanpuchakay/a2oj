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
char compliment(char c)
{
    return c == 'B' ? 'R' : 'B';
}
void solveCase(ll testCaseNum)
{
    cin >> n;
    string pattern;
    cin >> pattern;
    vector<pair<int, int>> strips;
    ll noOfQs = 0, imperfection = 0;
    for (int i = 0; i < n; i++)
    {
        if (pattern[i] == '?')
            noOfQs++;
        else if (noOfQs > 0)
        {
            strips.push_back({i - noOfQs, i - 1});
            noOfQs = 0;
        }
    }
    if (noOfQs > 0)
    {
        strips.push_back({n - noOfQs, n - 1});
        noOfQs = 0;
    }
    for (pair<int, int> stripPos : strips)
    {
        if (stripPos.second != (n - 1))
        {
            char currChar = compliment(pattern[stripPos.second + 1]);
            for (int i = stripPos.second; i >= stripPos.first; i--)
            {
                pattern[i] = currChar;
                currChar = compliment(currChar);
            }
        }
        else
        {
            char currChar = stripPos.first > 0 ? compliment(pattern[stripPos.first - 1]) : 'B';
            for (int i = stripPos.first; i <= stripPos.second; i++)
            {
                pattern[i] = currChar;
                currChar = compliment(currChar);
            }
        }
    }
    // for (int i = 1; i < n; i++)
    // {
    //     imperfection += (pattern[i] == pattern[i - 1] ? 1 : 0);
    // }
    cout << pattern << endl;
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