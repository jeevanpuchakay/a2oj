/*
// Sample code to perform I/O:


// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>

using namespace std;

long long int min(long long int a,long long int b){
	return a<b?a:b;
}
int main() {//er is " << num << endl;		// Writing output to STDOUT
	int t,n,x,y,temp;
	cin>>t;
	while(t--){
		cin>>x>>y>>n;
		long long int pos[n+1];
		long long int dp[n+1][n+1];
		for(int i=0;i<n;i++)cin>>pos[i+1];
		// memset(dp,0,(n+1)*(n+1)*sizeof(long long int));
		for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
		dp[i][j]=0;
		for(int i=3;i<=n;i++){
			for(int j=n-i+1;j>=1;j--){
				dp[j][j+i-1]=INT_MAX;
				for(int cut=j+1;cut<j+i-1;cut++){
					temp=x*(pos[cut]-pos[j])+y*(pos[j+i-1]-pos[cut])+dp[j][cut]+dp[cut][j+i-1];
					dp[j][j+i-1]=min(dp[j][j+i-1],temp);
				}
			}
		}
		cout<<dp[1][n]<<endl;
		// for(int i=0;i<=n;i++){
		// for(int j=0;j<=n;j++)
		// cout<<dp[i][j]<<" ";
		// cout<<endl;}
	}

}
