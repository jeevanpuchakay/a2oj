#include <iostream>
using namespace std;
long long i,n,c[100005],sum;
int main(){
    cin>>n>>c[0];
    for(i=1;i<n;i++){
        cin>>c[i];
        if(c[i]<c[i-1]) sum=sum+c[i-1]-c[i];
    }
    cout<<sum;
}