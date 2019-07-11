#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n;
void solveCase()
{
    ld l, leftCarPos, rightCarPos, timePassed, lCurrSpeed, rCurrSpeed, lTimeToReachNext, rTimeToReachNext;
    ll lNextFlag, rNextFlag;
    cin >> n >> l;
    ld flagPos[n];
    for (ll i = 0; i < n; i++)
        cin >> flagPos[i];
    leftCarPos = 0, rightCarPos = l, timePassed = 0, lNextFlag = 0, rNextFlag = n - 1, lCurrSpeed = rCurrSpeed = 1;
    while (lNextFlag <= rNextFlag)
    {
        lTimeToReachNext = (flagPos[lNextFlag] - leftCarPos) / lCurrSpeed;
        rTimeToReachNext = (rightCarPos - flagPos[rNextFlag]) / rCurrSpeed;
        if (lTimeToReachNext <= rTimeToReachNext)
        {
            timePassed += lTimeToReachNext;
            leftCarPos = flagPos[lNextFlag];
            lCurrSpeed++;
            lNextFlag++;
            rightCarPos -= (lTimeToReachNext * rCurrSpeed);
        }
        else
        {
            timePassed += rTimeToReachNext;
            rightCarPos = flagPos[rNextFlag];
            rCurrSpeed++;
            rNextFlag--;
            leftCarPos += (rTimeToReachNext * lCurrSpeed);
        }
    }
    timePassed += (rightCarPos - leftCarPos) / (lCurrSpeed + rCurrSpeed);
    cout << fixed << setprecision(9) << timePassed << endl;
}

int main()
{

    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}

//118000406120038