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
ll getMaxSubStrWithAtmostKInvalidChars(string &s, char matchChar, ll noOfWildCards)
{
    ll noOfWildCardsUsed = 0, leftEnd = -1, ans = 0;
    // cout << matchChar << endl;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != matchChar && noOfWildCardsUsed < noOfWildCards)
        {
            noOfWildCardsUsed++;
        }
        else if (s[i] != matchChar)
        {
            while (leftEnd + 1 <= i && noOfWildCardsUsed >= noOfWildCards)
            {
                /* code */
                if (noOfWildCardsUsed > 0 && s[leftEnd + 1] != matchChar)
                {
                    noOfWildCardsUsed--;
                }
                leftEnd++;
            }
            if (noOfWildCards > 0)
            {
                noOfWildCardsUsed++;
            }
        }
        if (leftEnd + 1 <= i)
        {
            ans = max(ans, i - leftEnd);
        }
        // cout << "LeftEnd=" << leftEnd + 1 << " i=" << i << " ans=" << ans << " usedCards=" << noOfWildCardsUsed << endl;
    }
    return ans;
}
void solveCase(ll testCaseNum)
{
    string s;
    cin >> n >> m >> s;
    cout << max(getMaxSubStrWithAtmostKInvalidChars(s, 'a', m), getMaxSubStrWithAtmostKInvalidChars(s, 'b', m)) << endl;
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