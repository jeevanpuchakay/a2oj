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
    vector<int> region(n);
    vector<vector<int>> ans(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
        cin >> region[i];
    for (int i = 0; i < n; i++)
    {
        int regionNo = region[i], currRow = i, currCol = i;
        for (int j = 0; j < regionNo; j++)
        {
            while (ans[currRow][currCol] != -1)
            {
                if (currCol == 0)
                    currRow++;
                else if(ans[currRow][currCol-1] == -1)
                    currCol--;
                else  currRow++;
            }
            ans[currRow][currCol] = regionNo;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}