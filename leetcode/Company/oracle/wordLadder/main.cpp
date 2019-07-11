#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
//vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}

class Solution {
public:
vector<vector<int> > adjList;
int target;
int noOfNodes;
int lenOfWord;
vector<int> mark;
int dfs(){
    

}
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
         noOfNodes=wordList.size();
        noOfNodes++;
         lenOfWord=beginWord.size();
        adjList=vector<vector<int> > (noOfNodes);
        int c=0;
        wordList.insert(0,beginWord);
        for(int i=0;i<noOfNodes;i++){
            for(int j=i+1;j<noOfNodes;j++){
                c=0;
                for(int z=0;z<lenOfWord&&c<2;z++){
                    if(wordList[i][z]!=wordList[j][z]){
                        c++;
                    }
                }
                if(c<2){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
            if(wordList[i]=endWord)
            target=i;
        }
        mark=vector<int>(noOfNodes,0);
        return dfs();


    }
};