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
ll cases = 1, n, sum, m, q;
ll x, y;
ll calculateLenOfLongestSeq(ll pos, vector<ll> &numbers, vector<ll> &lenOfSeqTillI, vector<ll> &prevNumberInSeq)
{
    // for (ll i = start; i <= n; i++)
    // {
    //     // if (prevNumberInSeq[i]==numbers)
    for (ll j = 1; j < pos; j++)
    {
        if (numbers[pos] != numbers[j] && lenOfSeqTillI[j] + 1 > lenOfSeqTillI[pos])
        {
            prevNumberInSeq[pos] = j;
            lenOfSeqTillI[pos] = lenOfSeqTillI[j] + 1;
        }
    }
    return 0;
    // }
}
void solveCase(ll testCaseNum)
{
    cin >> n >> q;
    vector<ll> numbers(n + 1), prevNumberInSeq(n + 1, 0), lenOfSeqTillI(n + 1, 1);
    ll maxAns = 0;
    for (ll i = 1; i <= n; i++)
        cin >> numbers[i];
    lenOfSeqTillI[0] = 0;
    prevNumberInSeq[1] = 0;
    for (ll i = 1; i <= n; i++)
    {
        calculateLenOfLongestSeq(i, numbers, lenOfSeqTillI, prevNumberInSeq);
        // maxAns = max(maxAns, lenOfSeqTillI[i]);
        if (lenOfSeqTillI[maxAns] < lenOfSeqTillI[i])
        {
            maxAns = i;
        }
        // cout << prevNumberInSeq[i] << " ";
    }
    // cout << endl;
    for (ll i = 1; i <= q; i++)
    {
        cin >> x >> y;
        if (numbers[x] == y)
        {
            cout << lenOfSeqTillI[maxAns] << endl;
            continue;
        }
        // numbers[x] = y;
        vector<ll> isAffected(n + 1, false);
        isAffected[x] = true;
        for (ll j = x + 1; j <= n; j++)
        {
            if (isAffected[prevNumberInSeq[j]] || numbers[j] == numbers[x])
            {
                // cout << j << " ";
                isAffected[j] = true;
            }
        }
        numbers[x] = y;
        // cout << "Query no=" << i << " ";
        for (ll j = x; j <= n; j++)
        {
            if (isAffected[j] == false)
                continue;
            lenOfSeqTillI[j] = 1;
            calculateLenOfLongestSeq(j, numbers, lenOfSeqTillI, prevNumberInSeq);
            // maxAns = max(maxAns, lenOfSeqTillI[j]);
        }
        // cout << endl;
        maxAns = 0; //INT_MIN;
        for (ll j = 1; j <= n; j++)
        {
            // maxAns = max(maxAns, lenOfSeqTillI[j]);
            if (lenOfSeqTillI[maxAns] < lenOfSeqTillI[j])
            {
                maxAns = j;
            }
            // cout << lenOfSeqTillI[j] << " ";
        }
        // cout << endl;

        cout << lenOfSeqTillI[maxAns] << endl;
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