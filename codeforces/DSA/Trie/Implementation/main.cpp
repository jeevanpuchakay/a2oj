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
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

class Trie
{
    Trie *links[26];
    bool isEnd;

public:
    /** Initialize your data structure here. */
    Trie()
    {
        sfor(0, 26, i)
        {
            links[i] = NULL;
            isEnd = false;
        }
    }
    void psh(int pos, int last, string word, Trie *present)
    {
        if (pos == last)
        {
            present->isEnd = true;
            return;
        }
        if (present->links[word[pos] - 'a'] == NULL)
        {
            Trie *newNode = new Trie();
            psh(pos + 1, last, word, newNode);
            present->links[word[pos] - 'a'] = newNode;
        }
        else
        {
            psh(pos + 1, last, word, present->links[word[pos] - 'a']);
        }
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        int n = (int)word.sz;
        if (n == 0)
            return;
        psh(0, n, word, this);
    }

    bool searchEntireWord(int method, int pos, int last, string word, Trie *curr)
    {
        if (pos == last)
        {
            if (method)
                return curr->isEnd;
            return true;
        }
        if (curr->links[word[pos] - 'a'] != NULL)
        {
            return searchEntireWord(method, pos + 1, last, word, curr->links[word[pos] - 'a']);
        }
        else
            return false;
    }
    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        int n = (int)word.sz;
        return searchEntireWord(1, 0, n, word, this);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        int n = (int)prefix.sz;
        return searchEntireWord(0, 0, n, prefix, this);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */