#include<bits/stdc++.h>

using namespace std;
vector <vector<int>> adjlist;
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<char,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;

ll max(ll x, ll y) {
    return x > y ? x : y;

}

ll min(ll x, ll y) {
    return x > y ? y : x;
}

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        int st[n][26];
        imap ab;
        memset(st,0,n*26* sizeof(st[0][0]));
        cin>>s;
        sfor(s.size())
        ab[]
        sfor(n-1)
        {
            cin>>s;
            for (int j = 0; j <s.size() ; ++j) {
                st[i+1][s[j]-'a']++;
            }
        }
        int i,c=0;
        for(auto j=st[];j!=st[0].ed;j++)
        {
            for(i=1;i<n;i++)
            {
                if(!st[i][j->second])
                    break;
            }
            if(i==n)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}