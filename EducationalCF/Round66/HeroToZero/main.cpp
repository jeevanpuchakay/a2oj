//time limit exceeded
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,count=0;
        cin>>n>>k;
        while(n)
        {
            if(n%k==0)
            {
                n/=k;
                count++;
            }
            else
            {
                count+=n%k;
                n-=n%k;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}