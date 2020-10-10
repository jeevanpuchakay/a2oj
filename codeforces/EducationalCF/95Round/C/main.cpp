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

ll cases, n;
int go(int pos, int turn, int bosses[], vector<vector<int>> &dp)
{
    if (pos >= n)
        return 0;
    if (dp[pos][turn] != -1)
        return dp[pos][turn];
   
   if(turn==1){
       dp[pos][turn]=INT_MAX;
       if((pos<n-1)&&bosses[pos]==1&&bosses[pos+1]==1){
           dp[pos][turn] =min(1+go(pos + 1, turn ^ 1, bosses, dp),2+ go(pos + 2, turn ^ 1, bosses, dp));
       }
       else if(bosses[pos]==1){
           dp[pos][turn] =1+min(go(pos + 1, turn ^ 1, bosses, dp), go(pos + 2, turn ^ 1, bosses, dp));
       }
       else if(pos<(n-1)&&bosses[pos+1]==1){
           dp[pos][turn] = min(go(pos + 1, turn ^ 1, bosses, dp), 1+go(pos + 2, turn ^ 1, bosses, dp));
       }
       else{
           dp[pos][turn] = min(go(pos + 1, turn ^ 1, bosses, dp), go(pos + 2, turn ^ 1, bosses, dp));
       }
   }else{
       dp[pos][turn] = min(go(pos + 1, turn ^ 1, bosses, dp), go(pos + 2, turn ^ 1, bosses, dp));
   }
    return dp[pos][turn];
}
int main()
{
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
        int bosses[n];
        vector<vector<int>> dp(n, vector<int>(2, -1));
        for (int i = 0; i < n; i++)
            cin >> bosses[i];
        cout << go(0, 1, bosses, dp) << endl;
        // for (int i = 0; i < n; i++)
        //     cout << dp[i][0] << " " << dp[i][1] << endl;
        // cout << dp[0][1] << endl;
    }
    return 0;
}