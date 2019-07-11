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
struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = intervals.sz;
    int startOfNewInter = newInterval->start;
    int endOfNewInter = newInterval->end;
    int leftMark = INT_MAX, rightMark = INT_MAX;
    sfor(0, n, i)
    {
        if (leftMark != )
        {
            if ((leftMark >= (intervals[i]->start)) && ((intervals[i]->end) >= leftMark))
            {
                leftMark = i;
            }
            if ((rightMark >= (intervals[i]->start)) && ((intervals[i]->end) >= rightMark))
            {
                rightMark = i;
            }
        }
    }
    if ((leftMark == -1) && (rightMark == -1))
        return intervals;
    int pos = 0;
    vector<Interval> ans;
    while (pos < leftMark)
    {
        Interval temp = Interval(intervals[pos]->start, intervals[pos]->end);
        pos++;
    }
}

int main()
{
}
