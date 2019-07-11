#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
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

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
       // unordered_
       map<Node *,Node *> cloneMap;
       Node* cop=head;
       while(cop!=NULL){
           Node* newNode=new Node(cop->val,cop->next,cop->random);
           cloneMap[cop]=newNode;
           cop=cop->next;
       }
       cloneMap[NULL]=NULL;
       cop=head;
       while(cop!=NULL){
           Node *temp=cloneMap[cop];
           temp->next=cloneMap[cop->next];
           temp->random=cloneMap[cop->random];
           cop=cop->next;
       }
       return cloneMap[head];
    }
};
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}

