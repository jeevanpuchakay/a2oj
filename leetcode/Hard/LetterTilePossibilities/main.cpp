#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

class Solution
{
public:
    unordered_map<string, bool> isPresent;
    int n;
    string given;
    vector<int> feq = vector<int>(26, 0);
    int go(string state)
    {
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            ans += go(state);
            if (feq[i])
            {
                feq[i]--;
                ans += go(state + given[i]);
                feq[i]++;
            }
        }
        if (isPresent[state] == false)
        {
            isPresent[state] = true;
            ans++;
        }
        return ans;
    }
    int numTilePossibilities(string tiles)
    {
        n = (int)tiles.sz;
        given = tiles;
        for (char alpha : tiles)
        {
            feq[alpha - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            ans += go((char)((int)'A'+(int)feq[i]));
            if (feq[i])
            {
                feq[i]--;
                ans += go(feq[i] + given[i]);
                feq[i]++;
            }
        }
        }
};