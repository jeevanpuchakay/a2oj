#include<bits/stdc++.h>

using namespace std;
#define pb push_back
typedef long long int ll;
const ll m=1e6+3;
int main() {
    string pat;
    cin >> pat;
    ll count=0;
    vector <string> tim;
    for (ll i = 0; i < pat.size(); ++i) {
        if (pat[i] == '>')
            tim.pb("1000");
        else if (pat[i] == '<')
            tim.pb("1001");
        else if (pat[i] == '+')
            tim.pb("1010");
        else if (pat[i] == '-')
            tim.pb("1011");
        else if (pat[i] == '.')
            tim.pb("1100");
        else if (pat[i] == ',')
            tim.pb("1101");
        else if (pat[i] == '[')
            tim.pb("1110");
        else if (pat[i] == ']')
            tim.pb("1111");
        for (ll j = 0; j <4 ; ++j) {
            count=(count*2+tim[i][j]-'0')%m;
        }
    }
    cout<<count;
    return 0;
}