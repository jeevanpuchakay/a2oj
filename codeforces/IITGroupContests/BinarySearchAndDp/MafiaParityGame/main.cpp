#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    ll start = 0, end = 0, mid, played, ans;
    cin >> n;
    vector<ll> noOfPlayerGame(n);
    for (ll &eachPlayer : noOfPlayerGame)
    {
        cin >> eachPlayer;
        // end += eachPlayer;
        end = max(end, eachPlayer);
    }
    ans = end;
    cout << ans+1 << endl;
    // while(start<=end){
    //     mid=start+(end-start)/2;
    //     played=noOfPlayerGame[0];
    //     for(ll i=1;i<n;i++){
    //         if(noOfPlayerGame[i]>played)played=noof
    //     }
    // }
}

int main()
{

    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}