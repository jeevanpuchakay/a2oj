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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

string getString(int num)
{
    string ans = "";
    ans = ('0' + num % 10) + ans;
    num /= 10;
    while (num)
    {
        ans = ('0' + num % 10) + ans;
        num /= 10;
    }
    return ans;
}

vector<string> Solution::fizzBuzz(int a)
{
    vector<string> ans(a + 1);
    sfor(1,a+1,i){
        if(!(i%15)){
            ans[i-1]="FizzBuzz";
        }
        else if(i%3==0){
            ans[i-1]="Fizz";
        }
        else if(i%5==0){
            ans[i-1]="Buzz";
        }
        else{
            ans[i-1]=getString(i);
        }
    }
    return ans;
}
