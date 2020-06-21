import java.util.Stack;

class pair {
    WordDictionary first;
    int second;

    pair(WordDictionary node, int n) {
        this.first = node;
        this.second = n;
    }
}

class WordDictionary {
    WordDictionary[] links;
    boolean isEndOfWord;

    /** Initialize your data structure here. */
    public WordDictionary() {
        links = new WordDictionary[26];
        isEndOfWord = false;
    }

    /** Adds a word into the data structure. */
    public void addWord(String word) {
        int n = word.length();
        char[] str = word.toCharArray();
        int pos = 0;
        WordDictionary currNode, temp;
        currNode = this;
        while (pos < n) {
            temp = currNode.links[str[pos] - 'a'];
            if (temp == null) {
                temp = new WordDictionary();
                currNode.links[str[pos] - 'a'] = temp;
            }
            pos++;
            currNode = temp;
        }
        currNode.isEndOfWord = true;
    }

    /**
     * Returns if the word is in the data structure. A word could contain the dot
     * character '.' to represent any one letter.
     */
    public boolean search(String word) {
        int n = word.length();
        char[] str = word.toCharArray();
        int pos = 0;
        WordDictionary currNode, temp;
        currNode = this;
        pos = 0;
        while (pos < n) {
            if (currNode.links[str[pos] - 'a'] == null) {
                break;
            } else {
                currNode = currNode.links[str[pos] - 'a'];
            }
            pos++;
        }
        if ((pos == n) && (currNode.isEndOfWord))
            return true;
        return false;
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary(); obj.addWord(word); boolean param_2
 * = obj.search(word);
 */

class Solution {
    List<String> ans = new ArrayList<>();

    public List<String> findWords(char[][] board, String[] words) {

    }
}