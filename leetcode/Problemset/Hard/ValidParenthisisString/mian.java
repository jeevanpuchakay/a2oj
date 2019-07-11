import java.util.*;

class Solution {
    public boolean checkValidString(String s) {
        char[] str = s.toCharArray();
        int n = str.length;
        int star = 0, pos = 0, val = 0;
        Stack<Integer> parens = new Stack<>();
        Stack<Integer> stars = new Stack<>();
        while (pos < n) {
            if (str[pos] == '(') {
                parens.push(pos);
            } else if (str[pos] == '*') {
                stars.push(pos);
            } else if (!parens.empty()) {
                parens.pop();
            } else if (!stars.empty()) {
                stars.pop();
            } else {
                return false;
            }
            pos++;
        }
        while (!parens.empty()) {
            if (stars.empty())
                return false;
            if (stars.peek() > parens.peek()) {
                stars.pop();
                parens.pop();
            } else
                return false;
        }
        return parens.empty();
    }
}