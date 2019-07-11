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

/**
 * Definition for an interval.
 */
struct Interval
{
    int start;
    int end;
};

typedef struct Interval interval;

/*
 * intervals : the array of interval
 * sz : number of entries in intervals
 * newInterval : new Interval to be inserted
 * len : populate the length of returned array of intervals in len
 */
interval *insert(interval *intervals, int sz, interval newInterval, int *len)
{
    bool flag = false;
    int pos = 0;
    interval ans[*len];
    if (sz == 0)
    {
        ans[0] = newInterval;
        return ans;
    }
    if (newInterval.end < intervals[0].start)
    {
        ans[0] = newInterval;
        ans[1] = intervals[0];
        pos += 2;
        flag = true;
    }
    else if ((newInterval.start <= intervals[0].end))
    {
        // ans[0]=new Interval;
        ans[0].start = min(newInterval.start, intervals[0].start);
        ans[0].end = max(newInterval.end, intervals[0].end);
        pos++;
        flag = true;
    }
    else
    {
        ans[0] = intervals[0];
        pos++;
    }
    for (int i = 1; i < sz; i++)
    {
        if (flag)
        {
            if (ans[pos - 1].end < intervals[i].start)
            {
                ans[pos++] = intervals[i];
            }
            else
            {
                ans[pos - 1].end = intervals[i].end;
            }
        }
        else
        {
            if (newInterval.end < intervals[i].start)
            {
                ans[pos++] = newInterval;
                ans[pos++] = intervals[i];
                flag = true;
            }
            else if (newInterval.start <= intervals[i].end)
            {
                ans[pos].start = min(newInterval.start, intervals[i].start);
                ans[pos].end = max(newInterval.end, intervals[i].end);
                pos++;
                flag = true;
            }
            else
            {
                ans[pos++] = intervals[i];
            }
        }
    }
    return ans;
}
