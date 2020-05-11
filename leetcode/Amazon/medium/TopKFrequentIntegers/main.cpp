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
    vector<int> maxH;
    unordered_map<int, int> feq;

public:
    void heapify(int n)
    {
        int temp = 0;
        while (2 * temp + 2 <= n)
        {
            if (feq[maxH[2 * temp + 1]] < feq[maxH[2 * temp + 2]])
            {
                if (feq[maxH[temp]] < feq[maxH[(2 * temp + 2)]])
                {
                    swap(maxH[temp], maxH[2 * temp + 2]);
                }
                else
                    break;
            }
            else
            {
                if (feq[maxH[temp]] < feq[maxH[(2 * temp + 1)]])
                    swap(maxH[temp], maxH[2 * temp + 1]);
                else
                    break;
            }
        }
    }
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        int count = 0;
        for (int num : nums)
        {
            if (feq[num] == 0)
                count++;
            feq[num]++;
        }
        maxH = vector<int>(count);
        int heapLen = -1;
        int temp;
        for (auto pos : feq)
        {
            maxH[++heapLen] = pos.first;
            temp = heapLen;
            while (temp)
            {
                if (feq[maxH[(temp - 1) / 2]] < feq[maxH[temp]])
                {
                    swap(maxH[temp], maxH[(temp - 1) / 2]);
                    temp = (temp - 1) / 2;
                }
                else
                    break;
            }
        }
        while (k--)
        {
            ans.pb(maxH[0]);
            maxH[0] = maxH[heapLen];
            heapLen--;
            heapify(heapLen);
        }
        return ans;
    }
};