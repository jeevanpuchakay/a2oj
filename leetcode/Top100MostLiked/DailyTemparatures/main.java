import java.util.Stack;

class Solution {
    public int[] dailyTemperatures(int[] temps) {
        int n = temps.length;
        int[] ans = new int[n];
        if (n == 0)
            return ans;
        else if (n == 1) {
            ans[0] = 0;
            return ans;
        }
        Stack<Integer> stack = new Stack<Integer>();
        ans[n - 1] = 0;
        stack.push(n - 1);
        int start = n - 2;
        while (start >= 0) {
            while ((!stack.empty()) && (temps[start] >= temps[stack.peek()])) {
                stack.pop();
            }
            if (stack.empty()) {
                ans[start] = 0;
            } else {
                ans[start] = stack.peek() - start;
            }
            stack.push(start);
            start--;
        }
        return ans;
    }
}