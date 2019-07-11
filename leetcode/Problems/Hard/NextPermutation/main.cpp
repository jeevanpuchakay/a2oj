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
    void nextPermutation(vector<int> &nums)
    {
        int n = (int)nums.sz;
        int start = n - 1;
        while (start > 0 && (nums[start] >= nums[start - 1]))
        {
            start++;
        }
        if (start == 0)
            return;
        int pick=start;
        while(pick<n&&(nums[pick]>nums[start-1])){
            pick++;
        }
        swap(nums[pick],nums[start-1]);
        reverse(nums.begin() + start, nums.end());
        return;
    }
};