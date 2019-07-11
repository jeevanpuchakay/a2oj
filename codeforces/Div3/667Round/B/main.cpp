#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int start,mid,end,a,b,t,x,y,n,ans,end2;
    cin>>t;
    while(t-->0){
        cin>>a>>b>>x>>y>>n;
        start=0,end=min(a-x,n),end2=min(b-y,n);
        ans=a*b;
        start=0,end=a*b;
        while(start<=end){
            mid=start+(end-start)/2;
            if()
        }
        
        // for(long long int i=0;i<=n;i++){
        //     ans=min(ans,max(a-i,x)*(max(b-n+i,y)));
        // }
        cout<<ans<<endl;
    }

}