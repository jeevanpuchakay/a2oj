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

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll cases;
    int n, nn, a, aMax, aCount;
    string s;
    char prev;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n >> s;
        nn = n;
        a = aMax = aCount = 0;
        prev = 'c';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                aCount++;
            if (prev == s[i])
            {
                a++;
                aMax = max(a, aMax);
            }
            else
            {
                a = 1;
                prev = s[i];
            }
            aMax = max(a, aMax);
        }
        cout << "Case #" << t + 1 << ": ";
        n = (1 + (n - 1) / 2);
        // cout << aMax << " " << aCount << " " << n;
        if ((aMax <= (n)) && ((aCount == (n)) || (nn - aCount) == (n)))
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}

// 6
// 3
// BAB
// 3
// BBB
// 5
// AABBA
// 7
// BAAABAA
// 11
// BBBAABAAAAB
// 11
// BABBBABBABB
