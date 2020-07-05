class Solution {
    public int numSquares(int n) {
        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = Integer.MAX_VALUE;
            double temp = Math.sqrt(i);
            if ((temp - Math.floor(temp)) == 0) {
                dp[i] = 1;
                continue;
            }
            for (int j = i - 1; j >= 1; j--) {
                dp[i] = Math.min(dp[i], dp[j] + dp[i - j]);
            }
        }
        return dp[n];
    }
}