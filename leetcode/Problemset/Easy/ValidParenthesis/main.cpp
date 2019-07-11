#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
//Jeevan
class Solution {
public:
    bool isOpenBracket(char bracket){
        return bracket== '('|| bracket=='[' || bracket=='{';
    }
    char counterBracket(char bracket){
        if(bracket==')')return '(';
        else if(bracket==']')return '[';
        else return '{';
    }
    bool isValid(string s) {
        stack<char> unProcessedBrackets;
        bool isValidString=true;
        for(char currChar:s){
            if(isOpenBracket(currChar)){
                unProcessedBrackets.push(currChar);
            }
            else if(unProcessedBrackets.empty()){
                isValidString=false;
                break;
            }else if(unProcessedBrackets.top()==counterBracket(currChar)){
                unProcessedBrackets.pop();
            }
            else{
                isValidString=false;
                break;
            }
        }
        return isValidString && unProcessedBrackets.empty();
    }
};
void solveCase(ll testCaseNum)
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}