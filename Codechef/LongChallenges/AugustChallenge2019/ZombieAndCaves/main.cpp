#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back

#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        ll q;
        ll c[n+1]={0};
        imap feq;
        for(ll i=1;i<n+1;i++) {
            cin >> q;
            if(i-q>0)
            c[i-q]++;
            else
                c[1]++;
            if(i+1+q<n+1)
                c[i+1+q]--;
        }
        for(ll i=1;i<n;i++) {
            c[i + 1] += c[i];
            feq[c[i]]++;
        }
        feq[c[n]]++;
        ll b=0;
        sfor(n) {
            cin >>a;
            if(feq[a]>0)
            {
                feq[a]--;
            }
            else
            {
                b=1;
            }
        }
        b?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
    return 0;
}