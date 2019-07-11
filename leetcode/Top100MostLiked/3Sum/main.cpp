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
    //T(n) = O(n^2)
    //S(n) = O(1)
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        if (nums.empty())
        {
            return res;
        }
        sort(nums.begin(), nums.end());
        int index = 0;
        int len = nums.size();
        while (index < len)
        {
            int a = index;
            int b = index + 1;
            int c = len - 1;
            while (b < c)
            {
                int sum = nums[a] + nums[b] + nums[c];
                if (sum == 0)
                {
                    res.push_back({nums[a], nums[b], nums[c]});
                    int previous = nums[c];
                    while (c >= 0 && nums[c] == previous)
                    {
                        previous = nums[c];
                        c--;
                    }
                    previous = nums[b];
                    while (b < len && nums[b] == previous)
                    {
                        previous = nums[b];
                        b++;
                    }
                }
                else if (sum > 0)
                {
                    int previous = nums[c];
                    while (c >= 0 && nums[c] == previous)
                    {
                        previous = nums[c];
                        c--;
                    }
                }
                else
                {
                    int previous = nums[b];
                    while (b < len && nums[b] == previous)
                    {
                        previous = nums[b];
                        b++;
                    }
                }
            }
            int previous = nums[index];
            while (index < len && nums[index] == previous)
            {
                previous = nums[index];
                index++;
            }
        }
        return res;
    }
};