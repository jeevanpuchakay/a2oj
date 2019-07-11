import java.util.ArrayList;

class Solution {
    List<String> ans = new ArrayList<String>();
    int n;

    public List<String> letterCasePermutation(String s) {
        n = (int) s.length();
        go(s, 0, "");
        return ans;
    }

    public void go(String s, int pos, String state) {
        if (pos == n) {
            ans.add(state);
            return;
        }
        go(s, pos + 1, state + s.charAt(pos));
        if ((s.charAt(pos) <= 'z') && (s.charAt(pos) >= 'a')) {
            go(s, pos + 1, state + (char)(s.charAt(pos) - 'a' + 'A'));
        }
        if ((s.charAt(pos) <= 'Z') && (s.charAt(pos) >= 'A')) {
            go(s, pos + 1, state +(char)(s.charAt(pos) - 'A' + 'a'));
        }
        return;
    }
}