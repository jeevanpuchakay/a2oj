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
string add(string s){
    int c=01;
    ll n=s.size();
    for(ll i=n-1;i>=0&&c;i--){
        char q=s[i];
        s[i]=(char)((s[i]-'0'+c)%10+(int)'0');
        c=((q)-('0')+c)/10;
        //cout<<i<<" i "<<s[i]<<c<<" c "<<endl;
    }
    if(c){
        s=(char)(c+'0')+s;
    }
    return s;
}
int main()
{
    ll t,n,c=0;
    cin>>t;
    string s;
    while(t--){
        c=0;
        cin>>s;
        string z=s;
        ll m= s.size();
        s=add(s);
        n=s.size();
        if(n==1)
        {
            cout<<z<<endl;
            continue;
        }
       // cout<<s;
        //cout<<n<<" n "<<m<<" m ";
        if(n!=m){
            cout<<1;
            sfor(1,n-1,i)
            cout<<0;
            cout<<1<<endl;
            continue;
        }

        c=0;
        sfor(0,n/2,i){
            if(s[i]!=s[n-1-i]){
                if(s[i]<s[n-i-1])
                    c=1;
                   s[n-i-1]=s[i];

            }
        }
        //cout<<"c"<<c;
        if(c){
            if(n%2){
                if(s[n/2]=='9'){
                    s[n/2]='0';
                    sfor(n/2+1,n,i){
                        if(s[i]!='9'){
                            s[i]++,s[n-1-i]++;
                            break;
                        }
                        else{
                            s[i]=s[n-i-1]='0';
                        }
                    }
                }
                else
                    s[n/2]++;
            }
            else{
                sfor(n/2,n,i){
                    if(s[i]!='9'){
                        s[i]++,s[n-1-i]++;
                        break;
                    }
                    else
                    {
                        s[i]=s[n-1-i]='0';
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
