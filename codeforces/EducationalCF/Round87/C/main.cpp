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
#define PI 3.14159265358979323846
int main()
{
    ll cases;
    cin >> cases;
    int n;
    ld nn, ans;
    sfor(0, cases, t)
    {
        cin >> n;
        nn = (ld)n;
        nn*=(1.000000);
        if((2*n)%4){
            cout<<fixed<<setprecision(7)<< sqrt((1/(1-cos(PI/nn))))<<endl;
        }
        else{
            nn-=1.000000;
            // cout<<"yes:  "<<nn<<" ";
            cout<<fixed<<setprecision(7)<< 1+sqrt((2.000000/(1-cos(PI/nn))))<<endl;
        }
        // cout << ans << endl;
    }
    return 0;
}
