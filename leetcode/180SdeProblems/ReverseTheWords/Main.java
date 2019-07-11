import java.util.*;

class Solution {
    public String reverseWords(String s) {
        int n = s.length();
        String ans = "", temp = "";
        for (int i = n - 1; i >= 0; i--) {
            if (s.charAt(i) == ' ' && (temp.length() != 0)) {
                if (ans.length() != 0)
                    ans += ' ';
                ans += temp;
                temp = "";
            } else if (s.charAt(i) != ' ') {
                temp = s.charAt(i) + temp;
            }
        }
        if (temp.length() > 0) {
            if (ans.length() > 0)
                ans += ' ';
            ans += temp;
        }
        return ans;
    }
}