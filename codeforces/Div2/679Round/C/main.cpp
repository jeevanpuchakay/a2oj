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
// ll permutate(ll pos, ll minimum, ll maximum)
// {
//     if (pos == n)
//     {
//         return abs(maximum - minimum);
//     }
//     ll ans = INT_MAX;
//     for (ll stringPos = 0; stringPos < 6; stringPos++)
//     {
//         ans = min(ans, permutate(pos + 1, min(minimum, adjlist[pos][stringPos]), max(maximum, adjlist[pos][stringPos])));
//     }
//     return ans;
// }
void solveCase(ll testCaseNum)
{
    vector<ll> strings(6);
    for (ll i = 0; i < 6; i++)
        cin >> strings[i];
    cin >> n;
    vector<pair<ll, ll>> allPossibleFrets(6 * n);
    unordered_map<ll, ll> freqOfNotesInSegment;
    ll left = 0, right = -1, ans = mod, countDistinct = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        for (ll j = 6 * i; j < 6 * i + 6; j++)
        {
            allPossibleFrets[j] = {x - strings[j % 6], i};
        }
    }
    auto comparator = [](pair<ll, ll> a, pair<ll, ll> b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    };
    sort(allPossibleFrets.begin(), allPossibleFrets.end(), comparator);

    // for (ll i = 0; i < 6 * n; i++)
    // {
    //     cout << "(" << i << " " << allPossibleFrets[i].first << " " << allPossibleFrets[i].second << ") " << endl;
    // }
    for (ll i = 0; i < 6 * n; i++)
    {
        if (freqOfNotesInSegment[allPossibleFrets[i].second] == 0)
        {
            countDistinct++;
            freqOfNotesInSegment[allPossibleFrets[i].second]++;
            right++;
        }
        else
        {
            right++;
            freqOfNotesInSegment[allPossibleFrets[i].second]++;
        }
        while (freqOfNotesInSegment[allPossibleFrets[left].second] > 1 && left <= right)
        {
            freqOfNotesInSegment[allPossibleFrets[left].second]--;
            left++;
        }
        if (countDistinct == n)
        {
            // cout << left << " " << right << " " << (allPossibleFrets[right].first - allPossibleFrets[left].first) << endl;
            ans = min(ans, allPossibleFrets[right].first - allPossibleFrets[left].first);
        }
    }
    cout << ans << endl;
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
