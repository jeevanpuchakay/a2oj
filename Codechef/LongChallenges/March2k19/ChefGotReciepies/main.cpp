#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //ll pat[n];
        string s;
        map<int ,int>feq;
        sfor(n)
        {
            cin>>s;
            int pat=0;
            ll a=s.size();
            for (ll j = 0; j < a; ++j) {
                if (s[j] == 'a')
                    pat = pat | 1 << 0;
                else if (s[j] == 'e')
                    pat = pat | 1 << 01;
                else if (s[j] == 'i')
                    pat = pat | 1 << 02;
                else if (s[j] == 'o')
                    pat = pat | 1 << 03;
                else if (s[j] == 'u')
                    pat = pat | 1 << 04;
            }
               // cout<<s<<" "<<pat<<endl;
               feq[pat]++;
        }
        ll count=0;
        sfor(32)
        {
            for (int j = 0; j < 32; ++j) {
                if((i|j)==31)
                {
                    if(i==j)
                        count+=((feq[i])*(feq[i]+1))/2;
                    else
                        count+=(feq[i]*feq[j]);
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}