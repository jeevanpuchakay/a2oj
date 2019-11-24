#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    string s;
    ll q;
    cin>>s>>q;
    ll l,r,n=s.size();
        ll count1=0,count2=0;
        ll ans[n],o[n],c[n];
        sfor(0,n,i)
        ans[i]=0,o[i]=0,c[i]=0;
        sfor(0,n,i){
            if(s[i]=='(')
            {
                count1++;
                i?ans[i]=ans[i-1]:ans[i]=0;
                i?c[i]=c[i-1]:c[i]=0;
            }
            else{
                if(count2+1<=count1){
                    count2++;
                    i?ans[i]=ans[i-1]+2:ans[i]=0;
                } else{
                    i?ans[i]=ans[i-1]:ans[i]=0;

                    count1=count2=0;
                }
                i?c[i]=c[i-1]+1:c[i]=0;
            }
            o[i]=count1-count2;
        }
        /*sfor(0,n,i) {
            cout << ans[i] << " ";
        }*/
    while (q--){
        cin>>l>>r;
        l--,r--;
        cout<<ans[r]-ans[l]-o[l]<<endl;
    }
    return 0;
}
/*
 * while (q--){
        cin>>l>>r;
        l--,r--;
            cout<<ans[r]-ans[l]<<endl;
    }
 */