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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

string Solution::multiple(int a)
{
    ll remainder = 1;
    string ans = "1";
    queue<string> qu;
    qu.push(ans);
    unordered_map<string, ll> remainList;
    remainList["1"] = 1;
    vi visited(a, 0);
    visited[1] = 1;
    if (a == 1)
        return "1";
    if(a==0)return "0";
    while (!qu.empty())
    {
        /* code */
        ll top = qu.front();
        qu.pop();
        ll tempRemain = ((remainList[top]) * (10 % a)) % a;
        remainList[top + '0'] = tempRemain;
        if (tempRemain == 0)
        {
            ans = top + '0';
            break;
        }
        else if (visited[tempRemain] == 0)
        {
            visited[tempRemain] == 1;
            qu.push(top + '0');
        }
        remainList[top + '1'] = (tempRemain + 1) % a;
        if (remainList[top + '1'] == 0)
        {
            ans = top + '1';
            break;
        }
        else if (visited[(tempRemain + 1) % a] == 0)
        {
            visited[(tempRemain + 1) % a] = 1;
            qu.push(top + '1');
        }
    }
    return ans;
}
