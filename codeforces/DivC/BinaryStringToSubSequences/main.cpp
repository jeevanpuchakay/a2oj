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
    string s;
    cin >> s;
    queue<ll> queue0, queue1;
    ll counter = 0;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (queue1.empty())
            {
                queue0.push(++counter);
                ans.push_back(counter);
            }
            else
            {
                queue0.push(queue1.front());
                ans.push_back(queue1.front());
                queue1.pop();
            }
        }
        else
        {
            if (queue0.empty())
            {
                queue1.push(++counter);
                ans.push_back(counter);
            }
            else
            {
                queue1.push(queue0.front());
                ans.push_back(queue0.front());
                queue0.pop();
            }
        }
        // cout << ans[i] << " ";
    }
    cout << counter << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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