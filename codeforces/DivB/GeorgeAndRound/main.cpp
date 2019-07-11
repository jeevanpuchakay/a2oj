#include<bits/stdc++.h>
//time limit exceeded
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,tot=0,x;
    cin>>n>>m;
    map<ll,ll,greater<int>> neccesary,prepared;
    for (ll i = 0; i < n; ++i) {
        cin>>x;
        neccesary[x]++;
    }
    for (ll j = 0; j < m; ++j) {
        cin>>x;
        prepared[x]++;
    }
    auto p=prepared.begin();
    for (auto k = neccesary.begin(); k!=neccesary.end(); ++k) {
        if((*k).first==(*p).first)
        {
            if((*k).second>(*p).second)
            {
                tot=tot+(*k).second-(*p).second;
            }
            p++;
        }
        else if((*k).first<(*p).first) {
            k--;
            p++;
        }
        else
        {
            tot=tot+(*k).second;
        }
    }
    cout<<tot;
    return 0;
}

