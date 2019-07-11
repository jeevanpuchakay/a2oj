#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
#define min(x,y) (x>y)?y:x
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

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int dp[n][n];
        int a=-1,b=-1;
        memset(dp,0,n*n*sizeof(int));
        for(int i=0;i<n;i++)
        dp[i][i]=1;
        for(int i=0;i<n-1;i++)
        if(s[i]==s[i+1])
        dp[i][i+1]=1,a=i,b=i+1;
        for(int i=2;i<n;i++)
        {
            for(int j=0;j<n-i;j++){
                if(s[j]==s[j+i]){
                    dp[j][j+i]=dp[j+1][j+i-1];
                    if(dp[j][j+i]&&(i+1>b-a+1)){
                        b=j+i,a=j;
                    }
                }
            }
        }
        //cout<<a<<" "<<b<<endl;
        //sfor(0,n,i)
        //{
          //  sfor(0,n,j)
            //cout<<dp[i][j]<<" ";
            //cout<<endl;
        //}
        string ans="";
        for(int i=a;i<=b;i++){
            ans+=s[i];
        }
        return ans;
    }
};

int main()
{
 string s;
 cin>>s;
 Solution obj;
 cout<<obj.longestPalindrome(s);
    return 0;
}

