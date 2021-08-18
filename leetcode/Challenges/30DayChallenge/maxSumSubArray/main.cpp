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
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        if (!n)
            return 0;
        int sum = 0, ans = INT_MIN;
        sfor(0, n, i)
        {
            if ((sum + nums[i]) > 0)
            {
                sum += nums[i];
                ans = max(sum, ans);
            }
            else
            {
                ans = max(ans, nums[i]);
                sum = 0;
            }
        }
        return ans;
    }
};