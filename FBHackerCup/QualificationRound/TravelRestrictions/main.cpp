#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
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
int n, cases, t;
vector<vector<char>> ans;
vector<bool> visited;

void bfs(int pos)
{
    visited[pos] = true;
    queue<int> qu;
    qu.push(pos);
    vector<int> inThePath;
    int curNode;
    inThePath.push_back(pos);
    while (!qu.empty())
    {
        curNode = qu.front();
        qu.pop();
        inThePath.push_back(curNode);
        for (int eachInThePath : inThePath)
        {
            ans[eachInThePath][curNode] = 'Y';
        }
        // inThePath.push_back(curNode);
        for (int eachCityConnected : adjlist[curNode])
        {
            if (!visited[eachCityConnected])
                qu.push(eachCityConnected);
        }
    }
    return;
}
void printAns()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return;
}
// int main()
// {
//     // freopen("input.txt", "r", stdin);
//     freopen("output1.txt", "w", stdout);
//     cin >> cases;
//     sfor(0, cases, t)
//     {
//         cin >> n;
//         string incoming, outgoin;
//         cin >> incoming >> outgoin;
//         adjlist = vector<vector<int>>(n, vector<int>());
//         ans = vector<vector<char>>(n, vector<char>(n, 'N'));
//         visited = vector<bool>(n, false);
//         if (outgoin[0] == incoming[1] && outgoin[0] == 'Y')
//         {
//             adjlist[0].push_back(1);
//         }
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (outgoin[i] == 'Y' && incoming[i - 1] == 'Y')
//             {
//                 adjlist[i].push_back(i - 1);
//             }
//             if (outgoin[i] == 'Y' && incoming[i + 1] == 'Y')
//             {
//                 adjlist[i].push_back(i + 1);
//             }
//         }
//         if (outgoin[n - 1] == 'Y' && incoming[n - 2] == 'Y')
//         {
//             adjlist[n - 1].push_back(n - 2);
//         }
//         for (int i = 0; i < n; i++)
//         {
//                             visited = vector<bool>(n, false);

//             if (!visited[i])
//             {
//                 bfs(i);
//             }
//         }
//         cout << "Case #" << t + 1 << ":" << endl;
//         printAns();
//     }
//     return 0;
// }

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output1.txt", "w", stdout);
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
        string incoming, outgoin;
        cin >> incoming >> outgoin;
        ans = vector<vector<char>>(n, vector<char>(n, 'N'));
        for (int i = 0; i < n; i++)
        {
            ans[i][i] = 'Y';
            if ((i > 0) && (incoming[i - 1] == 'Y') && (outgoin[i] == 'Y'))
            {
                ans[i][i - 1] = 'Y';
            }
            if ((i < n - 1) && (incoming[i + 1] == 'Y') && (outgoin[i] == 'Y'))
            {
                ans[i][i + 1] = 'Y';
            }
        }
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                if (outgoin[i] == 'N')
                    continue;
                for (int j = 0; j < n; j++)
                {
                    if (ans[i][j] == 'Y' || incoming[j] == 'N')
                        continue;
                    if (ans[i][k] == 'Y' && ans[k][j] == 'Y')
                        ans[i][j] = 'Y';
                }
            }
        }
        cout << "Case #" << t + 1 << ":" << endl;
        printAns();
    }
    return 0;
}