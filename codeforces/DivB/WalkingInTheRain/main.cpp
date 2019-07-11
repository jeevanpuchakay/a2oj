#include<bits/stdc++.h>

using namespace std;
vector <vector<int>> adjlist;
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;

ll mini(ll exp[], ll n) {
    ll i = 1, m = exp[0];
    while (i < n) {
        if ((exp[i] < m) && exp[i])
            m = exp[i];
    }
    return m;
}

ll check(ll exp[], ll n) {
    if (exp[0] == 0 || exp[n - 1] == 0)
        return 0;
    else {
        for (ll i = 0; i < n - 1; ++i) {
            if ((exp[i] == 0) && (exp[i + 1] == 0))
                return 0;
        }
        return 1;
    }
}

int main() {
    ll n, m = 0;
    cin >> n;
    ll exp[n];
    sfor(n) {
        cin >> exp[i];
    }
    ll a = check(exp, n);
    while (a) {
        a = mini(exp, n);
        m += a;
        for(int i=0;i<n;i++) {
            if (exp[i])
                exp[i] -= a;
        }
        a = check(exp, n);
    }
    cout << m;
    return 0;
}