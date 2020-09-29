#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
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

ll n, cases, min_ans, max_ans, temp, pcount = 0;
void dfs(ll person, double time, vector<vector<double>> &meet_time, unordered_set<ll> &infected_people)
{
    for (ll person2 = 0; person2 < n; person2++)
    {
        if (meet_time[person][person2] <= 0 || meet_time[person][person2] < time || infected_people.find(person2) != infected_people.end())
            continue;
        infected_people.insert(person2);
        dfs(person2, meet_time[person2][person], meet_time, infected_people);
    }
}

int main()
{
    cin >> cases;
    unordered_set<ll> infected_people;
    sfor(0, cases, t)
    {
        cin >> n;
        ll speeds[n];
        vector<vector<double>> meet_time(n, vector<double>(n, 0));
        // memset(meet_time, 0, n * n * sizeof(double));
        min_ans = n, max_ans = 1;
        for (ll i = 0; i < n; i++)
            cin >> speeds[i];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i; j < n; j++)
            {
                if (i == j)
                {
                    meet_time[i][i] = 0;
                }
                else if (speeds[i] == speeds[j])
                {
                    meet_time[i][j] = -1;
                    meet_time[j][i] = -1;
                }
                else
                {
                    meet_time[j][i] = meet_time[i][j] = float(i - j) / float(speeds[j] - speeds[i]);
                    if (meet_time[i][j] < 0)
                        meet_time[i][j] = meet_time[j][i] = -1;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            infected_people.insert(i);
            dfs(i, 0, meet_time, infected_people);
            temp = infected_people.size();
            min_ans = temp < min_ans ? temp : min_ans;
            max_ans = temp > max_ans ? temp : max_ans;
            // cout << i << " " << j << " " << min_ans << " " << max_ans << " " << temp << endl;
            infected_people.clear();
        }

        if (max_ans != 1)
            cout << min_ans << " " << max_ans << '\n';
        else
        {
            cout << 1 << " " << 1 << '\n';
        }
    }
    return 0;
}

// 4
// 3
// 1 2 3
// 3
// 3 2 1
// 3
// 0 0 0
// 3
// 1 3 2