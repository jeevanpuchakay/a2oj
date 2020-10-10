#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<pair<ll, ll>>> adjlist(100009);
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum, m;
ll x, y;
// void solveCase()
// {
//     cin >> n >> m;
//     ll startX, startY, finalX, finalY, xCor, yCor, cost, top;
//     cin >> startX >> startY >> finalX >> finalY;
//     adjlist = vector<vector<pair<ll, ll>>>(m + 5);
//     vector<pair<ll, ll>> flags(m);
//     for (ll i = 1; i <= m; i++)
//     {
//         cin >> xCor >> yCor;
//         flags[i - 1] = {xCor, yCor};
//     }
//     for (ll i = 0; i < m; i++)
//     {
//         xCor = flags[i].first, yCor = flags[i].second;
//         for (ll j = i + 1; j < m; j++)
//         {
//             if (xCor == flags[j].first || yCor == flags[j].second)
//             {
//                 adjlist[i + 1].push_back({j + 1, 0});
//                 adjlist[j + 1].push_back({i + 1, 0});
//             }
//             else
//             {
//                 cost = min(abs(flags[j].first - xCor), abs(flags[j].second - yCor));
//                 adjlist[i + 1].push_back({j + 1, cost});
//                 adjlist[j + 1].push_back({i + 1, cost});
//             }
//         }
//         cost = (abs(finalX - xCor) + abs(finalY - yCor));
//         adjlist[i + 1].push_back({m + 1, cost});
//         adjlist[m + 1].push_back({i + 1, cost});
//         if (xCor == startX || yCor == startY)
//         {
//             adjlist[i + 1].push_back({0, 0});
//             adjlist[0].push_back({i + 1, 0});
//         }
//         else
//         {
//             cost = min(abs(startX - xCor), abs(startY - yCor));
//             adjlist[i + 1].push_back({0, cost});
//             adjlist[0].push_back({i + 1, cost});
//         }
//     }
//     // for (ll i = 0; i < m; i++)
//     // {
//     // xCor = flags[i].first, yCor = flags[i].second;
//     // if (xCor == startX || yCor == startY)
//     // {
//     //     adjlist[i + 1].push_back({0, 0});
//     //     adjlist[0].push_back({i + 1, 0});
//     // }
//     // else
//     // {
//     //     cost = min(abs(startX - xCor), abs(startY - yCor));
//     //     adjlist[i + 1].push_back({0, cost});
//     //     adjlist[0].push_back({i + 1, cost});
//     // }
//     // }
//     // for (ll i = 0; i < m; i++)
//     // {
//     //     xCor = flags[i].first, yCor = flags[i].second;
//     //     if (xCor == finalX || yCor == finalY)
//     //     {
//     //         adjlist[i + 1].push_back({m + 1, 0});
//     //         adjlist[m + 1].push_back({i + 1, 0});
//     //     }
//     //     else
//     //     {
//     //         cost = min(abs(finalX - xCor), abs(finalY - yCor));
//     //         adjlist[i + 1].push_back({m + 1, cost});
//     //         adjlist[m + 1].push_back({i + 1, cost});
//     //     }
//     // }
//     cost = abs(finalX - startX) + abs(finalY - startY);
//     adjlist[0].push_back({m + 1, cost});
//     adjlist[m + 1].push_back({0, cost});
//     vector<ll> dist(m + 2, mod);
//     auto comparator = [&dist](ll a, ll b) {
//         return dist[a] > dist[b];
//     };
//     priority_queue<ll, vector<ll>, decltype(comparator)> qu(comparator);
//     dist[0] = 0;
//     qu.push(0);
//     while (qu.empty() == false)
//     {
//         top = qu.top();
//         qu.pop();
//         for (pair<ll, ll> &eachNode : adjlist[top])
//         {
//             if (dist[eachNode.first] > dist[top] + eachNode.second)
//             {
//                 // cout << top << " " << eachNode.first << " edgelenth: " << eachNode.second << endl;
//                 // cout << top << " " << dist[top] << " " << eachNode.first << " " << dist[eachNode.first] << " break ";
//                 dist[eachNode.first] = dist[top] + eachNode.second;
//                 qu.push(eachNode.first);
//                 // cout << dist[eachNode.first] << endl;
//             }
//         }
//     }
//     cout << dist[m + 1] << endl;
//     // for (ll each : dist)
//     //     cout << each << " ";
// }

vector<pair<ll, ll>> flags(100009);

int main()
{

    cin >> n >> m;
    ll startX, startY, finalX, finalY, xCor, yCor, cost, top;
    cin >> startX >> startY >> finalX >> finalY;

    for (ll i = 1; i <= m; i++)
    {
        cin >> xCor >> yCor;
        flags[i - 1] = {xCor, yCor};
    }
    for (ll i = 0; i < m; i++)
    {
        xCor = flags[i].first, yCor = flags[i].second;
        for (ll j = i + 1; j < m; j++)
        {
            if (xCor == flags[j].first || yCor == flags[j].second)
            {
                adjlist[i + 1].push_back({j + 1, 0});
                adjlist[j + 1].push_back({i + 1, 0});
            }
            else
            {
                cost = min(abs(flags[j].first - xCor), abs(flags[j].second - yCor));
                adjlist[i + 1].push_back({j + 1, cost});
                adjlist[j + 1].push_back({i + 1, cost});
            }
        }
        cost = (abs(finalX - xCor) + abs(finalY - yCor));
        adjlist[i + 1].push_back({m + 1, cost});
        adjlist[m + 1].push_back({i + 1, cost});
        if (xCor == startX || yCor == startY)
        {
            adjlist[i + 1].push_back({0, 0});
            adjlist[0].push_back({i + 1, 0});
        }
        else
        {
            cost = min(abs(startX - xCor), abs(startY - yCor));
            adjlist[i + 1].push_back({0, cost});
            adjlist[0].push_back({i + 1, cost});
        }
    }

    vector<ll> dist(m + 3, mod);
    auto comparator = [&dist](ll a, ll b) {
        return dist[a] > dist[b];
    };
    priority_queue<ll, vector<ll>, decltype(comparator)> qu(comparator);
    // for (ll i = 0; i < m; i++)
    // {
    // xCor = flags[i].first, yCor = flags[i].second;
    // if (xCor == startX || yCor == startY)
    // {
    //     adjlist[i + 1].push_back({0, 0});
    //     adjlist[0].push_back({i + 1, 0});
    // }
    // else
    // {
    //     cost = min(abs(startX - xCor), abs(startY - yCor));
    //     adjlist[i + 1].push_back({0, cost});
    //     adjlist[0].push_back({i + 1, cost});
    // }
    // }
    // for (ll i = 0; i < m; i++)
    // {
    //     xCor = flags[i].first, yCor = flags[i].second;
    //     if (xCor == finalX || yCor == finalY)
    //     {
    //         adjlist[i + 1].push_back({m + 1, 0});
    //         adjlist[m + 1].push_back({i + 1, 0});
    //     }
    //     else
    //     {
    //         cost = min(abs(finalX - xCor), abs(finalY - yCor));
    //         adjlist[i + 1].push_back({m + 1, cost});
    //         adjlist[m + 1].push_back({i + 1, cost});
    //     }
    // }
    cost = abs(finalX - startX) + abs(finalY - startY);
    adjlist[0].push_back({m + 1, cost});
    adjlist[m + 1].push_back({0, cost});
    dist[0] = 0;
    qu.push(0);
    while (qu.empty() == false)
    {
        top = qu.top();
        qu.pop();
        for (pair<ll, ll> &eachNode : adjlist[top])
        {
            if (dist[eachNode.first] > dist[top] + eachNode.second)
            {
                // cout << top << " " << eachNode.first << " edgelenth: " << eachNode.second << endl;
                // cout << top << " " << dist[top] << " " << eachNode.first << " " << dist[eachNode.first] << " break ";
                dist[eachNode.first] = dist[top] + eachNode.second;
                qu.push(eachNode.first);
                // cout << dist[eachNode.first] << endl;
            }
        }
    }
    cout << dist[m + 1] << endl;
    // for (ll each : dist)
    //     cout << each << " ";
    return 0;
}