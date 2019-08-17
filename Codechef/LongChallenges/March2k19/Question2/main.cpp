#include<bits/stdc++.h>

using namespace std;
typedef long double ld;
typedef long long int ll;
vector <vector<int>> adjlist;
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
ll k, c,dig;
/*
ll minix() {
    ll n=dig+1;
    ll dup=k*10+c;
    for (int i = 0; i <n; ++i) {
        ll a=pow(10,n-i-1);
        dup=(dup/pow(10,n-i))*pow(10,n-i-1)+(dup)%a;
        if(dup<k)
        {
            k=dup;
            return minix();
        }
    }
    return k;
}
*/
ll checkany(ll dig)
{
     ll le=pow(10,dig-1);
     while(le)
     {
         if((k/le)>(k/le*10)-)
             break;
         le/=10;
     }
     if(le)
     {
         le/=10;
         k=(((k/le)*le+((k*10)%(le)))*10)/le
     }
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        cin >> k >> c;
        dig=floor(log10(k)+1);
        if(dig==1)
        {
            if(k<=c)
            {cout<<c<<endl;
            break;}
            else
                cout<<k<<endl;
            break;
        }
    }
    return 0;
}