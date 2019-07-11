#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
#define min(x, y) (x > y) ? y : x
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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

ll n;
void solve(vi inputArray)
{
    ll i = 0;
    while (i < n-1)
    {
        if(inputArray[i]>inputArray[i+1])
        break;
        i++;
    }
    ll j=n-1;
    if(i==n-1)
    {
        cout<<0;
        return;
    }
    while(j>i){
        if(inputArray[j]<inputArray[j-1])
        {
            break;
        }
        j--;
    }
    
}

int main()
{
    cin >> n;
    vi inputArray(n);
    sfor(0, n, i)
            cin >>
        inputArray[i];
    solve(inputArray);
    return 0;
}



