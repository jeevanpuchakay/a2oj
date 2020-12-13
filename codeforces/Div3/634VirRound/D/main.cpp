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
ll differentEle(ll a, ll b, ll c)
{
    for (ll i = 1; i <= 9; i++)
    {
        if (i != a && i != b && i != c)
            return i;
    }
}
void solveCase(ll testCaseNum)
{
    vector<string> sudoku(9);
    for (ll i = 0; i < 9; i++)
    {
        cin >> sudoku[i];
    }
    ll diffEle;
    diffEle = differentEle(sudoku[0][0] - '0', sudoku[1][1] - '0', sudoku[2][2] - '0');
    sudoku[0][0] = sudoku[1][1] = sudoku[2][2] = diffEle + '0';
    cout << sudoku[0] << endl
         << sudoku[1] << endl
         << sudoku[2] << endl;

    diffEle = differentEle(sudoku[3][3] - '0', sudoku[4][4] - '0', sudoku[5][5] - '0');
    sudoku[3][3] = sudoku[4][4] = sudoku[5][5] = diffEle + '0';
    cout << sudoku[3] << endl
         << sudoku[4] << endl
         << sudoku[5] << endl;

    diffEle = differentEle(sudoku[6][6] - '0', sudoku[7][7] - '0', sudoku[8][8] - '0');
    sudoku[6][6] = sudoku[7][7] = sudoku[8][8] = diffEle + '0';
    cout << sudoku[6] << endl
         << sudoku[7] << endl
         << sudoku[8] << endl;
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