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
bool maxCharCheck(string &str, char maxChar)
{
    for (char character : str)
    {
        if (character > maxChar)
            return false;
    }
    return true;
}
bool freqCheck(string &str)
{
    unordered_map<char, bool> charFreq;
    for (char character : str)
    {
        if (charFreq[character])
            return false;
        charFreq[character] = true;
    }
    return true;
}
bool leftCheck(string &str, int aPos)
{
    char maxChar = 'a';
    int n = str.size();
    for (int i = aPos+1; i < n; i++)
    {
        if(str[i]<maxChar)return false;
        maxChar=str[i];
    }
    return true;
}
bool rightCheck(string &str, int aPos)
{
    char maxChar = 'a';
    int n = str.size();
    for (int i = aPos-1; i>=0; i--)
    {
        if(str[i]<maxChar)return false;
        maxChar=str[i];
    }
    return true;
}
void solveCase(ll testCaseNum)
{
    string str;
    cin >> str;
    int n = str.size();
    auto aPos = str.find('a');
    if (aPos == string::npos)
    {
        cout << "NO" << endl;
        return;
    }
    if (maxCharCheck(str, 'a' + n - 1) == false)
    {
        cout << "NO" << endl;
        return;
    }
    else if (freqCheck(str) == false)
    {
        cout << "NO" << endl;
        return;
    }
    else if (leftCheck(str, aPos) == false)
    {
        cout << "NO" << endl;
        return;
    }
    else if (rightCheck(str, aPos) == false)
    {
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }
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