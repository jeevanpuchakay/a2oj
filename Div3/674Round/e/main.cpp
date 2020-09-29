#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, a1, a2, a3, b1, b3, b2, ansMax, ansMin, temp, a1c, a2c, a3c, b1c, b2c, b3c;
void solveCase()
{
    cin >> n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    ansMax = 0, ansMin = INT_MAX;
    temp = 0;
    temp += (min(a1, b2));
    temp += min(a2, b3);
    temp += min(a3, b1);
    ansMax = max(ansMax, temp);
    ansMin = min(ansMin, temp);
    temp = n;
    temp = 0;
    temp += (min(b1, a2));
    temp += min(b2, a3);
    temp += min(b3, a1);
    a1c = a1, a2c = a2, a3c = a3, b1c = b1, b2c = b2, b3c = b3;
    if (a2 > b1)
    {

        a2 -= b1;
        b1 = 0;
    }
    else
    {

        b1 -= a2;
        a2 = 0;
    }
    if (a3 > b2)
    {
        a3 -= b2;
        b2 = 0;
    }
    else
    {
        b2 -= a3;
        a3 = 0;
    }
    if (a1 > b3)
    {
        // temp -= b3;
        a1 -= b3;
        b3 = 0;
    }
    else
    {
        // temp -= a1;
        b3 -= a1;
        a1 = 0;
    }
    temp += min(a1, b1);
    temp += min(a2, b2);
    temp += min(a3, b3);
    temp = max(n - temp, 0);
    ansMin = min(ansMin, temp);

    temp = 0;

    temp += min(a1c, b1c);
    temp += min(a2c, b2c);
    temp += min(a3c, b3c);
    if (a1c > b1c)
    {
        a1c -= b1c;
        b1c = 0;
    }
    else
    {
        b1c -= a1c;
        a1c = 0;
    }
    if (a2c > b2c)
    {
        a2c -= b2c;
        b2c = 0;
    }
    else
    {
        b2c -= a2c;
        a2c = 0;
    }
    if (a3c > b3c)
    {
        a3c -= b3c;
        b3c = 0;
    }
    else
    {
        b3c -= a3c;
        b3c = 0;
    }
    temp += (min(b1c, a2c));
    temp += min(b2c, a3c);
    temp += min(b3c, a1c);
    temp = max(n - temp, 0);
    ansMin = min(ansMin, temp);
    cout << ansMin << " " << ansMax << '\n';
    //     if (temp > 0)
    //     {

    //     }
}

int main()
{
    cases = 1;
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}