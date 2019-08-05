#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector <ll> ans;
//answer is second largest%largest
int main() {
    ll n;
    cin >> n;
    ll inp[n];
    for (ll i = 0; i < n; ++i) {
        cin >> inp[i];
    }
    sort(inp,inp+n,greater<int>());
    unique(inp,inp+n);
    cout << inp[1]%inp[0] << endl;
    return 0;
}