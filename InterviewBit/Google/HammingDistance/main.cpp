

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))


int Solution::hammingDistance(const vector<int> &a) {

    ll n=a.size();
    ll ans=0,count1=0,count2=0;
    sfor(0,32,i){
        count1=count2=0;
        sfor(0,n,j){
            if((1<<i)&(a[j])){
               // cout<<((1<<i)&(a[j]))<<endl;
                count1++;
            }
            else{
                count2++;
            }
            
        }
            ans+=abs(count1*count2);
            ans%=mod;
    }
    return (2*ans)%mod;
}
