import java.util.*;

class Solution {
    List<String> ans = new ArrayList<String>();

    public List<String> generateParenthesis(int n) {
        go("", n, n);
        return this.ans;
    }

    void go(String str, int c1, int c2) {
        if ((c1 == 0) && (c2 == 0)) {
            ans.add(new String(str));
            return;
        }

        if (c1 < c2) {
            go(str + ')', c1, c2 - 1);
        }
        if (c1 == 0) {
            return;
        }
        if (c1 <= c2) {
            go(str + '(', c1 - 1, c2);
        }
        return;

    }
}