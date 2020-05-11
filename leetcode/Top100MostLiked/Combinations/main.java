import java.util.*;

class Solution {
    List<List<Integer>> ans = new ArrayList<List<Integer>>();
    int maxLen;
    int reqLen;
    Boolean[] visited;

    public List<List<Integer>> combine(int n, int k) {
        this.maxLen = n;
        this.reqLen = k;
        List<Integer> temp = new ArrayList<>();
        visited = new Boolean[n];
        for (int i = 0; i < n; i++)
            visited[i] = false;
        go(temp, 0);
        return this.ans;
    }

    void go(List<Integer> temp, int pos) {
        if (pos == this.reqLen) {
            ans.add(new ArrayList<>(temp));
            return;
        }

        for (int i = pos > 0 ? temp.get(pos - 1) : 0; i < this.maxLen; i++) {
            if (!visited[i]) {
                visited[i] = true;
                temp.add(i + 1);
                go(temp, pos + 1);
                temp.remove(pos);
                visited[i] = false;
            }
        }
        return;
    }
}