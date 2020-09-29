#include<bits/stdc++.h>
using namespace std;
long long int max(long long int a,long long b){
    return a>b?a:b;
}
int main(){
    long long int start,mid,end,a,b,t,x,y,n,end2,cd;
    vector<int> ans;
    cin>>t;
    while(t-->0){
        cin>>n>>x>>y;
        for(int i=1;i<(y-x);i++){
            if((y-x)%i==0){
                if((y-x)/i>)
                cd=(y-x)/i;
            }
        }
        mid=((y-x)/cd)+1;
        // start=x-((x-1)/cd)*cd;
        start=x-cd*max((x/cd)-x%cd==0?1:0,n-mid);
        ans.clear();
        for(long long i=0;i<n;i+=cd){
            cout<<(start+i)<<" ";
        }
        cout<<endl;
    }

}