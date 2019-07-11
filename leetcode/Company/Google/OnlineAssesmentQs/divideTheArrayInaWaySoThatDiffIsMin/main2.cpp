#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> ladjlist;
ll lmax(ll x, ll y) { return (x > y) ? x : y; }
ll lmin(ll x, ll y) { return (x > y) ? y : x; }


int main()
{
    int sum1,sum2,t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        sum1=sum2=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(sum1>=(sum2+x)){
                sum2+=x;
            }else if(sum2>=(sum1+x)){
                sum1+=x;
            }else if(sum1>sum2){
                sum2+=x;
            }else{
                sum1+=x;
            }
        }
        cout<<abs(sum1-sum2)<<endl;
    }
    return 0;
}