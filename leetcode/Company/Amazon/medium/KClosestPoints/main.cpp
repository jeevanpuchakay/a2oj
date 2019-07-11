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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        map<pair<int, int>, int> distances;
        for (auto z = points.begin(); z != points.end(); z++)
        {
            int a = (*z)[0], b = (*z)[1];
            distances[{a, b}] = (a * a + b * b);
        }
        vector<vector<int>> ans;
        for (auto z = distances.begin(); (z != distances.end() )&& k; z++)
        {
            k--;
            vector<int> dup;
            dup.push_back((*z).first.first);
            dup.push_back((*z).first.second);
            ans.push_back(dup);
        }
        return ans;
    }
};

int main()
{
    ll cases;
    cin >> cases;
    sfor(0, cases, t)
    {
    }
    return 0;
}
