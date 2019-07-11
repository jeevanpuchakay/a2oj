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

ll countInversions(ll startPos, ll endPos, vector<ll> &interestDiff)
{
    ll mid = startPos + (endPos - startPos) / 2, ans = 0;
    if ((endPos - startPos + 1) <= 1)
    {
        return 0;
    }
    else if ((endPos - startPos + 1) <= 2)
    {
        if (-interestDiff[startPos] < interestDiff[endPos])
        {
            ans++;
        }
        if (interestDiff[startPos] > interestDiff[endPos])
        {
            swap(interestDiff[startPos], interestDiff[endPos]);
        }
        return ans;
    }
    ans = countInversions(startPos, mid, interestDiff) + countInversions(mid + 1, endPos, interestDiff);
    ll start1 = startPos, start2 = mid + 1, pos;
    ll tempArr[endPos - startPos + 1];
    while (start1 <= mid)
    {
        /* code */
        // for (ll j = mid + 1; j <= endPos; j++)
        // {
        //     if (-interestDiff[start1] < interestDiff[j])
        //     {
        //         ans += (endPos - j + 1);
        //         break;
        //     }
        // }
        ll left = mid + 1, right = endPos, curr, possible = -1;
        while (left <= right)
        {
            curr = left + (right - left) / 2;
            if (-interestDiff[start1] < interestDiff[curr])
            {
                possible = curr;
                right = curr - 1;
            }
            else
            {
                left = curr + 1;
            }
        }
        if (possible != -1)
        {
            ans += (endPos - possible + 1);
        }
        start1++;
    }
    start1 = startPos, start2 = mid + 1, pos = 0;
    while (start1 <= mid && start2 <= endPos)
    {
        /* code */
        if (interestDiff[start1] < interestDiff[start2])
        {
            tempArr[pos++] = interestDiff[start1++];
        }
        else
        {
            tempArr[pos++] = interestDiff[start2++];
        }
    }
    while (start1 <= mid)
    {
        tempArr[pos++] = interestDiff[start1++];
    }
    while (start2 <= endPos)
    {
        /* code */
        tempArr[pos++] = interestDiff[start2++];
    }
    pos = 0, start1 = startPos;
    while (start1 <= endPos)
    {
        interestDiff[start1++] = tempArr[pos++];
    }
    return ans;
}
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> teachersInterest(n), studentsInterest(n), interestDiff(n);
    for (ll i = 0; i < n; i++)
        cin >> teachersInterest[i];
    for (ll i = 0; i < n; i++)
        cin >> studentsInterest[i];
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        interestDiff[i] = teachersInterest[i] - studentsInterest[i];
    }
    ans = countInversions(0, n - 1, interestDiff);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}

