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
    vector<int> a(n + 1);
    bool isException = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            isException = false;
    }
    if (a[n] == 0)
    {
        for (int i = 1; i <= (n + 1); i++)
            cout << i << " ";
        cout << endl;
    }
    else if (isException || (a[1] == 1))
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= (n); i++)
            cout << i << " ";
        cout << endl;
    }
    else
    {
        int pivot = -1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i - 1] == 0 && a[i] == 1)
            {
                pivot = i-1;
                break;
            }
        }
        for (int i = 1; i <= pivot; i++)
            cout << i << " ";
        cout << n + 1 << " ";
        for (int i = pivot + 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
    }
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