#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,t;
string seq;
void answer()
{
    for (int r = 1; r <t+1 ; ++r) {
        for (int i = 0; i <n-1 ; i++) {
            if(seq[i]=='B'&&seq[i+1]=='G')
            {
                swap(seq[i],seq[i+1]);
                i++;
            }
        }
    }
    return;
}
int main()
{
    cin>>n>>t;
    cin>>seq;
    answer();
    cout<<seq<<endl;
    return 0;
}