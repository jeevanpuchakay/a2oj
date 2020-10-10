#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
   int sum=0;
    cin>>n;
    int r[n];
    for (int i = 0; i <n ; ++i) {
        cin>>r[i];
    }
    sort(r,r+n);
    sum=r[0]*r[0];
    for (int j = 2; j < n; j+=2) {
        sum+=r[j]*r[j]-r[j-1]*r[j-1];
    }
    float p=3.141592653589793;
    if(n%2==0)
    {
        float a=p*r[n-1]*r[n-1]-p*sum;
        cout<<a;
    }
    else
    {
        float a=p*sum;
        cout<<a;
    }
    return 0;
}

