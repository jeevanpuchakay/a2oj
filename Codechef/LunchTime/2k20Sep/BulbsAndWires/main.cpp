#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll>>
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)

class comp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {

        if ((b.second - b.first) != (a.second - a.first))
        {
            return (b.second - b.first) > (a.second - a.first);
        }
        else
        {
            return b.first > a.first;
        }
    }
};

int main()
{
    ll cases, n, k, start, end, ans, temp;
    vector<ll> consecutiveZeros, specialZeros;
    string s;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n >> k;
        cin >> s;
        start = end = -1;
        ans = 0;
        consecutiveZeros.clear();
        specialZeros.clear();
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (start == -1)
                {
                    start = i;
                }
            }
            else if (start != -1)
            {
                end = i - 1;
                if (start != 0)
                    consecutiveZeros.push_back(end - start + 1);
                else
                {
                    specialZeros.push_back(end - start + 1);
                }
                start = end = -1;
            }
        }
        if (start != -1)
        {
            end = n - 1;
            specialZeros.push_back(end - start + 1);
            start = end = -1;
        }
        sort(specialZeros.begin(), specialZeros.end(), greater<int>());
        sort(consecutiveZeros.begin(), consecutiveZeros.end(), greater<int>());
        start = temp = 0, end = consecutiveZeros.size();
        for (ll each : specialZeros)
            temp += each;
        while ((start < end))
        {
            /* code */
            if (temp > consecutiveZeros[start])
            {
                if (k > 1)
                {
                    k -= 2;
                }
                else if (k == 1)
                {
                    if (specialZeros.size() == 2)
                    {
                        ans += specialZeros[1];
                    }
                    k--;
                    temp = 0;
                }
                else
                {
                    ans += temp;
                }
                temp = 0;
            }
            else if (k >= 2)
            {
                k -= 2;
                start++;
            }
            else
            {
                ans += consecutiveZeros[start];
                start++;
            }
        }
        if (temp > 0)
        {
            if (k == 0)
                ans += temp;
            else if (k == 1)
            {
                if (specialZeros.size() == 2)
                {
                    ans += specialZeros[1];
                }
            }
                }
        cout << ans << '\n';
    }
    return 0;
}