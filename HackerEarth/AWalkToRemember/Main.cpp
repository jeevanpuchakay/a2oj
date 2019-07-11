#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int>> adjlist;
int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }
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
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
stack<int> orderOfExploration;

int main()
{
    
    long n,m;
    cin>>n>>m;
    adjlist=vector<vector<int>>(n);
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adjlist[x-1].push_back(y-1);
    }
    
    return 0;
}












#include<bits/stdc++.h>
using namespace std;
long long int min(long long int a,long long int  b{
	return a>b?b:a;
})
int main(){
	long long int rem=0, n,k,temp=0,ans=1000000009;
	cin>>n>>k;
	long long int numbers[n+1];
	unordered_map<long long int,long long int> lastOcc;
	for(long long int i=01;i<=n;i++){
		cin>>numbers[i];
		rem+=numbers[i];
		rem%=k;
	}

	for(long long int i=1;i<n+1;i++){
		temp+=numbers[i];
		temp%=k;
		ans=min(ans,i-lastOcc[rem-temp]);
	}
	cout<<ans<<endl;

}