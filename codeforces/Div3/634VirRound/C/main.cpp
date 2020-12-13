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
    vector<ll> skillFreqOfStudents(n, 0);
    ll noOfDistinctSkills = 0, leastPossibleSz = 1, largestPossible = n / 2, mid, ans = 0, idx1, idx2;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        x--;
        skillFreqOfStudents[x]++;
        if (skillFreqOfStudents[x] == 1)
            noOfDistinctSkills++;
    }
    sort(skillFreqOfStudents.begin(), skillFreqOfStudents.end());
    while (leastPossibleSz <= largestPossible)
    {
        mid = leastPossibleSz + (largestPossible - leastPossibleSz) / 2;
        idx1 = lower_bound(skillFreqOfStudents.begin(), skillFreqOfStudents.end(), mid) - skillFreqOfStudents.begin();
        idx2 = upper_bound(skillFreqOfStudents.begin(), skillFreqOfStudents.end(), mid) - skillFreqOfStudents.begin();
        if (idx1 == n)
        {
            largestPossible = mid - 1;
            continue;
        }
        if (noOfDistinctSkills - 1 >= mid)
        {
            ans = mid;
            leastPossibleSz = mid + 1;
            continue;
        }
        if ((mid < skillFreqOfStudents[idx1]) && (noOfDistinctSkills >= mid))
        {
            ans = mid;
            leastPossibleSz = mid + 1;
            continue;
        }
        if (idx2 < n && (mid < skillFreqOfStudents[idx2]) && (noOfDistinctSkills >= mid))
        {
            ans = mid;
            leastPossibleSz = mid + 1;
            continue;
        }
        largestPossible = mid - 1;
    }
    cout << ans << endl;
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