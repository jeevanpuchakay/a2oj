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

int Solution::paint(int a, int b, vector<int> &c)
{
    int n = c.size();
    int mas = 0;ll sum=0;
    sfor(0, n, i)
    {
        if (c[i] > mas)
        {
            mas = c[i];
        }
        sum += c[i];
    }
    if (n <= a)
    {
        return ((mas%10000003)*(b%10000003))%10000003;
    }
    ll low = b, high, ans, mid, paintersUsed;
    high = sum;
    sum = 0;
    while (low < high)
    {
        mid = (low + high) / 2;
        paintersUsed = 0;
        int i,painted=0;
        for (i = 0; i < n; i++)
        {
            if (sum + c[i] <= mid)
            {
                sum += c[i];
                painted++;
            }
            else if (paintersUsed < a)
            {
                sum = c[i];
                paintersUsed++;
                painted++;
            }
            else
            {
                break;
            }
        }
        if (i < n){
            if(painted==n){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        else if(painted==n){
                high=mid;
            }
            else{
                low=mid+1;
            }
    }

    return ((low%10000003)*(b%10000003))%10000003;
}

int main()
{

    return 0;
}