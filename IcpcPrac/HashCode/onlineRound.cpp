#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define umap unordered_map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
ll b, libr, days;
vi bookScore;

ll ansScore = 0;
vi ansOrderOfLibraries;
umap ansUnlockedLibraries;

struct library
{
    /* data */
    ll noOfBooks;
    ll noOfDaysToSignup;
    ll noOfBooksShipPerDay;
    vector<pair<ll, ll>> booksInLib;
};
vector<library> lis;

void go(ll today, ll score,
        ll expectedDate, ll libraryTobeU,
        umap bookScanned, umap librariesUnlocked, vi orderOflibraries)
{
    //cout<<score<<endl;
    
        if (ansScore < score)
        {
            ansOrderOfLibraries = orderOflibraries;
            ansScore = score;
        }
    
    if (today < expectedDate)
    {
        ll temp = 0;
        for (auto z = librariesUnlocked.bg; z != librariesUnlocked.ed; z++)
        {
            if ((z)->second)
            {
                ll libraryNumber = z->first;
                ll perDay = lis[libraryNumber].noOfBooksShipPerDay;
                for (auto q = lis[libraryNumber].booksInLib.bg;
                     q != lis[libraryNumber].booksInLib.ed && (perDay); q++)
                {
                    if (bookScanned[q->second] == 0)
                    {
                        bookScanned[q->second] = 1;
                        temp += q->first;
                        perDay--;
                    }
                }
            }
        }
        go(today + 1, score + temp, expectedDate,
           libraryTobeU, bookScanned, librariesUnlocked, orderOflibraries);
        return;
    }
    else
    {
        librariesUnlocked[libraryTobeU] = 1;
        orderOflibraries.pb(libraryTobeU);
        ll temp = 0;
        for (auto z = librariesUnlocked.bg; z != librariesUnlocked.ed; z++)
        {
            if ((z)->second)
            {
                ll libraryNumber = z->first;
                ll perDay = lis[libraryNumber].noOfBooksShipPerDay;
                for (auto q = lis[libraryNumber].booksInLib.bg;
                     (q != lis[libraryNumber].booksInLib.ed )&& (perDay); q++)
                {
                    if (bookScanned[q->second] == 0)
                    {
                        bookScanned[q->second] = 1;
                        temp += q->first;
                        perDay--;
                    }
                }
            }
        }
        sfor(0, libr, i)
        {
            if (librariesUnlocked[i] == 0)
            {
                go(today + 1, score + temp, today + lis[i].noOfDaysToSignup,
                   i, bookScanned, librariesUnlocked, orderOflibraries);
            }
        }

        return;
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> b >> libr >> days;
    ll x, y, z;
    sfor(0, b, i)
    {
        cin >> x;
        bookScore.pb(x);
    }
    lis = vector<library>(libr);
    sfor(0, libr, i)
    {
        cin >> x >> y >> z;
        lis[i].noOfBooks = x;
        lis[i].noOfDaysToSignup = y;
        lis[i].noOfBooksShipPerDay = z;
        sfor(0, x, j)
        {
            cin >> z;
            lis[i].booksInLib.pb({bookScore[z], z});
        }
        sort(lis[i].booksInLib.bg, lis[i].booksInLib.ed, greater<pair<ll,ll>>());
    }
    sfor(0, libr, i)
    {
        ll today=0;
        umap bookScanned,librariesUnlocked;
        vi orderOflibraries;
        go(today,0, today + lis[i].noOfDaysToSignup,
           i, bookScanned, librariesUnlocked, orderOflibraries);
    }
    cout<<ansOrderOfLibraries.size()<<endl;
    vi track(b,0);ll day=0;
    for(auto z=ansOrderOfLibraries.bg;z!=ansOrderOfLibraries.ed;z++){
        
        ll libNo=(*z);vi dum;
        day+=lis[libNo].noOfDaysToSignup;
        ll pum=day;
        ll perday=0;//lis[libNo].noOfBooksShipPerDay;
        for(auto w=lis[libNo].booksInLib.bg;w!=lis[libNo].booksInLib.ed&&(pum<days);w++){
            if(track[w->second]!=1){
                dum.pb(w->second);
                track[w->second]=1;
                perday++;
                if(perday==lis[libNo].noOfBooksShipPerDay){
                    perday=0;
                    pum++;
                }
            }
        }
        cout<<libNo<<" "<<dum.size()<<endl;
        for(auto m=dum.bg;m!=dum.ed;m++)
        cout<<(*m)<<" ";
        cout<<endl;
    }
    return 0;
}