//time limit exceeded

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,sum,j;
    vector<ll> segs;
    cin>>n;
    ll input[n];
    for (ll k = 0; k <n ; ++k) {
        cin>>input[k];
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n==2||n==3)
    {
        cout<<2;
    }
    for (ll i = 0; i < n-2; ++i) {
        sum=input[i]+input[i+1];
        for (j = i+2; j <n ; ++j) {
            if(sum!=input[j])
            {
                segs.push_back(j-i);
                break;
            }
            sum+=input[j-1];
        }
        if(j==n)
        {
            segs.push_back(j-i);
        }
        if(segs[i]==n)
        {
            cout<<n;
            return 0;
        }
    }
    sort(segs.begin(),segs.end(),greater<ll>());
    cout<<segs[0];
    return 0;
}

