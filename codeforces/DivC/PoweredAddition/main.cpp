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
ll cases = 1, n, sum, m;
ll x, y;
vector<lls> twoPowers(33);
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> numbers(n + 1);
    for (ll i = 1; i < n + 1; i++)
        cin >> numbers[i];
    ll least = -1, temp, lenth;
    for (ll i = 2; i <= n; i++)
    {
        if (numbers[i - 1] > numbers[i])
        {
            temp = numbers[i - 1] - numbers[i];
            lenth = 0;
            while (temp > 0)
            {
                lenth++;
                temp >>= 1;
            }
            least = max(lenth, least);
            numbers[i] = numbers[i - 1];
        }
    }
    cout << ((least == -1 ? 0 : least)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    twoPowers[0] = 0, twoPowers[1] = 1;
    for (ll i = 2; i <= 32; i++)
    {
        twoPowers[i] = twoPowers[i - 1] * 2 + twoPowers[i - 1];
        // cout << i << " " << twoPowers[i] << endl;
    }
    // cout << endl;
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}

/*
cout << i << " " << lenth << " " << temp << endl;
*/