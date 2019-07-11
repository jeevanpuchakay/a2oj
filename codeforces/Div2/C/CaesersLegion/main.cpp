#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
#define mod 100000000
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
ll n1, n2, k1, k2;
ll dp[109][109][15][15];
ll go(ll horses, ll tigers, ll lHorses, ll lTigers)
{
    //cout<<horses<<" "<<tigers<<" "<<lHorses<<" "<<lTigers<<endl;
    if ((horses == 0) && (tigers == 0))
    {
        return 1;
    }
    else if(horses==0){
        if(tigers+lTigers<=k2){
            return dp[horses][tigers][lHorses][lTigers]=1;
        }
        return dp[horses][tigers][lHorses][lTigers]=0;
    }
    else if(tigers==0){
        if(horses+lHorses<=k1){
            return dp[horses][tigers][lHorses][lTigers]=1;
        }
        return dp[horses][tigers][lHorses][lTigers]=0;
    }
    else if (dp[horses][tigers][lHorses][lTigers] != -1)
    {
        return dp[horses][tigers][lHorses][lTigers]%mod;
    }
    if (lHorses == k1)
    {
        return dp[horses][tigers][lHorses][lTigers] = (go(horses, tigers - 1, 0, 1)%mod);
    }
    else if (lTigers == k2)
    {
        return dp[horses][tigers][lHorses][lTigers] = (go(horses - 1, tigers, 1, 0)%mod);
    }
    dp[horses][tigers][lHorses][lTigers] = (go(horses, tigers - 1, 0, lTigers + 1)%mod);
    dp[horses][tigers][lHorses][lTigers] += (go(horses - 1, tigers, lHorses + 1, 0)%mod);
    return dp[horses][tigers][lHorses][lTigers]%mod;
}
int main()
{
    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, 109 * 109 * 15 * 15);
    cout << go(n1, n2, 0, 0);
    return 0;
}