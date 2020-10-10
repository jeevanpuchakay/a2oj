#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prime(ll n)
{
    if(n<=1)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0||n%3==0)
        return 0;
    for (ll i = 5; i*i <=n ; i=i+6) {
        if(n%i==0||n%(i+2)==0)
            return 0;
    }
    return 1;
}
ll Tprime(ll m)
{
	ll a=sqrt(m);
	if(a*a==m)
	{if(prime(a))
	return 1;
	}
	return 0;
}
int main()
{
    ll n,m;
    cin>>n;
    for (ll i = 0; i <n ; ++i) {
        cin>>m;
        Tprime(m)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}
