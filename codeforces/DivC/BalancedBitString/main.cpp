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
    string s, ansString = "";
    cin >> n >> m >> s;
    vector<bool> isOne(m, false), isZero(m, false);
    bool isPossible = true;
    ll noOfOnes = 0, noOfZeros = 0;
    n = s.size();
    for (ll i = 0; i < n; i++)
    {
        // isOne[i % m] = s[i] == '1';
        // isZero[i % m] = s[i] == '0';
        if (s[i] == '0')
        {
            isZero[i % m] = true;
        }
        else if (s[i] == '1')
        {
            isOne[i % m] = true;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        if (isOne[i] && isZero[i])
        {
            isPossible = false;
            break;
        }
        if (isOne[i])
        {
            noOfOnes++;
        }
        else if (isZero[i])
        {
            noOfZeros++;
        }
    }
    if (noOfOnes * 2 > m || noOfZeros * 2 > m)
    {
        isPossible = false;
    }
    if (isPossible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // if(isPossible)
    // for (ll i = 0; i < n; i++)
    // {
    //     if (isOne[i % m])
    //     {
    //         ansString += '1';
    //     }
    //     else if (isZero[i % m])
    //     {
    //         ansString += '0';
    //     }
    //     else
    //     {
    //         ansString += '1';
    //     }
    // }
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