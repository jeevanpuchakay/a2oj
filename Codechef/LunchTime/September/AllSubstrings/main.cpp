#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll t;
    cin>>t;
    string s1,s2,ans;
    while(t--){
        cin>>s1>>s2;
        cmap a,b;
        ll n1=s1.size(),n2=s2.size(),d=0,z=1;
        sfor(i,n1)
        {
            a[s1[i]]++;
            if(z){
                ll w=s1[i]-'a'+1;
                while(z&&w<26)
                {
                    if(a[s1['a'+w]])
                        z=0;
                    w++;
                }
            }
        }
        sfor(i,n2)
        b[s2[i]]++;
        ans=s1;
        sfor(i,26){
            if(a['a'+i]<=b['a'+i])
                b['a'+i]-=a['a'+i];
            else
            {
                d=1;
                break;
            }
        }
        if(d){
            cout<<"Impossible"<<endl;
            continue;
        }
        ll j=0;
        if(z)
        while('a'+j<s1[0]&&j<26){
            sfor(i,b['a'+j])
            ans=(char)('a'+j)+ans;
            j++;
        }
        else
            while('a'+j<=s1[0]&&j<26){
                sfor(i,b['a'+j])
                    ans=(char)('a'+j)+ans;
                j++;
            }
        while(j<26){
            sfor(i,b['a'+j]){
                ans=ans+(char)('a'+j);
            }
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
//4
//aa
//ababab
//aaa
//ramialsadaka
//said
//sryhieni
//code
//codeisfun