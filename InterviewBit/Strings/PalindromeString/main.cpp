#include <bits/stdc++.h>
using namespace std;

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


int isAlpahbet(char a){
    if((a>='a')&&(a<='z')){
        return a-'a'+1;
    }
    else if((a>='A')&&(a<='Z')){
        return a-'A'+1;
    }
    if((a>='0')&&(a<='9')){
        return 100+a-'0';
    }
    return 0;
}

int Solution::isPalindrome(string a) {
    ll start=0;int flag=1;
    ll end=a.sz-1;
    while(start<end&&flag){
        if(a[start]==' '){
            start++;continue;
        }else if(a[end]==' '){
            end--;continue;
        }
        int front=isAlpahbet(a[start]);
        int back=isAlpahbet(a[end]);
       if(!front){
           start++;continue;
       }else if(!back){
           end--;continue;
       }
       else if(front!=back){
           flag=0;
           //cout<<start<<" "<<end<<endl;
           //cout<<a[start]<<front <<" "<<back;
       }
       else{
           start++,end--;
       }
    }
    return flag;
};



class Solution{
};
