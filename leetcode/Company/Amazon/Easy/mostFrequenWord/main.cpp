#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))


class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        int i=0,lenth = paragraph.size();
        while(i<lenth){
            if((paragraph[i]>='A'&&paragraph[i]<='Z')){
                paragraph[i]='a'+paragraph[i]-'A';
            }
        }
        unordered_map<string,int> ban,fequency;
        for(auto z=banned.begin();z!=banned.end();z++){
            ban[*z]++;
        }
        i=0;
        string dummy;
        while(i<lenth){
            dummy="";
            while (i<lenth&&paragraph[i]>='a'&&paragraph[i]<='z')
            {
                /* code */
                dummy+=paragraph[i++];
            }
            if(dummy!="\0")
            fequency[dummy]++;
            i++;
        }
        i=0;
        for(auto z=fequency.begin();z!=fequency.end();z++){

            if((*z).second>i)
            i=(*z).second,dummy=(*z).first;
        }
        return dummy;
    }
};
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}

