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
    cin >> n >> m;
    vector<ll> numbers(n + 10), restrictedNumbers(m + 10), copyOfNumbers(n + 10), copyOfNumbers2(n + 10), finalArray(n + 10);
    ll leftEnd, rightEnd, ans = 0, ans1, ans2, onlyAns1 = 0, onlyAns2 = 0;
    bool possible1 = true, possible2 = true;
    for (ll i = 1; i <= n; i++)
    {
        cin >> numbers[i];
        copyOfNumbers[i] = numbers[i];
        copyOfNumbers2[i] = numbers[i];
    }
    for (ll i = 1; i <= m; i++)
        cin >> restrictedNumbers[i];
    restrictedNumbers[m + 1] = n + 1, restrictedNumbers[0] = 0;
    numbers[0] = -2 * mod, numbers[n + 1] = mod + 10;
    copyOfNumbers[0] = -2 * mod, copyOfNumbers[n + 1] = mod + 10;
    for (ll i = m + 1; i > 0; i--)
    {
        leftEnd = restrictedNumbers[i - 1], rightEnd = restrictedNumbers[i];
        for (ll j = rightEnd - 1; j > leftEnd; j--)
        {
            if (numbers[j] >= numbers[j + 1])
            {
                numbers[j] = numbers[j + 1] - 1;
            }
        }
        for (ll j = leftEnd + 1; j < rightEnd; j++)
        {
            if (copyOfNumbers[j - 1] >= copyOfNumbers[j])
            {
                copyOfNumbers[j] = copyOfNumbers[j - 1] + 1;
            }
        }
        ans1 = ans2 = 0;
        possible1 = true, possible2 = true;
        for (ll j = leftEnd + 1; j <= rightEnd; j++)
        {
            if (copyOfNumbers2[j] != copyOfNumbers[j])
            {
                ans2++;
            }
            if (copyOfNumbers2[j] != numbers[j])
            {
                ans1++;
            }
            if (numbers[j - 1] < numbers[j] == false)
            {
                possible1 = false;
            }
            if (copyOfNumbers[j - 1] < copyOfNumbers[j] == false)
            {
                possible2 = false;
            }
        }
        if (possible1 && possible2)
        {
            if (ans1 < ans2)
            {
                for (ll j = leftEnd; j <= rightEnd; j++)
                {
                    finalArray[j] = numbers[j];
                }
            }
            else
            {
                for (ll j = leftEnd; j <= rightEnd; j++)
                {
                    finalArray[j] = copyOfNumbers[j];
                }
            }
        }
        else if (possible1)
        {
            for (ll j = leftEnd; j <= rightEnd; j++)
            {
                finalArray[j] = numbers[j];
            }
        }
        else if (possible2)
        {
            for (ll j = leftEnd; j <= rightEnd; j++)
            {
                finalArray[j] = copyOfNumbers[j];
            }
        }
        else
        {
            cout << -1 << endl;
            cout << leftEnd << " " << rightEnd << endl;
            return;
        }
    }
    possible1 = true;
    finalArray[0] = INT_MIN;
    ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        // cout << numbers[i] << " ";
        if (finalArray[i] >= finalArray[i + 1])
        {
            possible1 = false;
        }
        if (finalArray[i] != copyOfNumbers2[i])
            ans++;
    }
    if (possible1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
        // cout << leftEnd << "" << rightEnd << endl;
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