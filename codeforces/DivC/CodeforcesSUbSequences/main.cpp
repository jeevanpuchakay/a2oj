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
    vector<ll> freq(10, 1);
    ll pos = 0, currNoOfSequences = 1;
    while (currNoOfSequences < n)
    {
        currNoOfSequences /= freq[pos];
        freq[pos]++;
        currNoOfSequences *= freq[pos];
        pos = (pos + 1) % 10;
    }
    cout << string(freq[0], 'c') + string(freq[1], 'o') + string(freq[2], 'd') + string(freq[3], 'e') + string(freq[4], 'f') + string(freq[5], 'o') + string(freq[6], 'r') + string(freq[7], 'c') + string(freq[8], 'e') + string(freq[9], 's') << endl;
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