class Solution {
    public int numDecodings(String s) {
        int n = s.length();

        if (s.charAt(0) == '0')
            return 0;
        if (n <= 1)
            return n;
        int[] dp = new int[n];
        dp[0] = 1;
        int temp = 0;
        temp = s.charAt(0) - '0';
        temp *= 10;
        temp += (s.charAt(1) - '0');
        if (temp <= 26 && (temp % 10 != 0))
            dp[1] = 2;
        else
            dp[1] = 1;
        for (int i = 2; i < n; i++) {
            if ((s.charAt(i) == s.charSt(i - 1) && (s.charAt(i) == '0')))
                return 0;
            temp = s.charAt(i - 1) - '0';
            temp *= 10;
            temp += (s.charAt(i) - '0');
            if (temp % 10 == 0 || (temp < 10)) {
                dp[i] = dp[i - 2];
            } else if (temp <= 26 && (temp > 9))
                dp[i] = dp[i - 1] + dp[i - 2];
            else
                dp[1] = dp[i - 1];
        }
        return dp[n - 1];
    }
}