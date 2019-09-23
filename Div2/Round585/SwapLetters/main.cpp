#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n,i) for(int i=0;i<n;i++)
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
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    string a,b;
    ll n;
    cin>>n;
    cin>>a>>b;
    vector<ll> tem;
    vector<ll> pos1,pos2;
    //ll k=-1;
    sfor(n,i){
        if(a[i]=='a'&&b[i]=='b'){
            pos1.pb(i);
        }
        else if(a[i]=='b'&&b[i]=='a'){
            pos2.pb(i);
        }
    }
    if((pos1.size()+pos2.size())%2){
        cout<<-1;
        return 0;
    }
    ll n1=pos1.size(),n2=pos2.size();
    if(n1%2){
        cout<<(n1+n2+2)/2<<endl;
        sfor(n1-2,i){
            cout<<pos1[i]+1<<" "<<pos1[i+1]+1<<endl;i++;
        }
        cout<<pos1[n1-1]+1<<" "<<pos1[n1-1]+1<<endl;
        cout<<pos1[n1-1]+1<<" "<<pos2[0]+1<<endl;
        for(ll i=1;i<n2-1;i++){
            cout<<pos2[i]+1<<" "<<pos2[i+1]+1<<endl;i++;
        }
    }else{
        cout<<(n1+n2)/2<<endl;
        sfor(n1-1,i){
            cout<<pos1[i]+1<<" "<<pos1[i+1]+1<<endl;
            i++;
        }
        sfor(n2-1,i){
            cout<<pos2[i]+1<<" "<<pos2[i+1]+1<<endl;
            i++;
        }
    }
    return 0;
}
//4
//abab
//aabb