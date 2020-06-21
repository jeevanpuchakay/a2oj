import java.util.*;

class MapSum {
    boolean isEndOfWord;
    int value;
    HashMap<Character, MapSum> links;

    /** Initialize your data structure here. */
    public MapSum() {
        isEndOfWord = false;
        value = 0;
        links = new HashMap<>();
    }

    public void insert(String key, int val) {
        MapSum currNode = this;
        int pos = 0;
        int n = key.length();
        char[] str = key.toCharArray();
        while (pos < n) {
            MapSum temp = currNode.links.get(str[pos]);
            if (temp == null) {
                temp = new MapSum();
                currNode.links.put(str[pos], temp);
            }
            currNode = temp;
            pos++;
        }
        currNode.isEndOfWord = true;
        currNode.value = val;
        System.out.println(this);
    }

    public int sum(String prefix) {
        MapSum currNode = this;
        int pos = 0;
        int n = prefix.length();
        char[] str = prefix.toCharArray();
        int ans = 0;
        MapSum temp;
        while (pos < n) {
            temp = currNode.links.get(str[pos]);
            if (temp == null)
                return ans;
            currNode = temp;
            pos++;
        }
        Stack<MapSum> stack = new Stack<>();
        stack.push(currNode);
        while (!stack.empty()) {
            currNode = stack.pop();
            if (currNode == null)
                continue;
            ans += currNode.value;
            for (Map.Entry<Character, MapSum> entry : currNode.links.entrySet()) {
                if (entry.getValue() != null) {
                    stack.push(entry.getValue());
                }
            }
        }
        System.out.println(prefix);
        return ans;
    }
}

/**
 * Your MapSum object will be instantiated and called as such: MapSum obj = new
 * MapSum(); obj.insert(key,val); int param_2 = obj.sum(prefix);
 */