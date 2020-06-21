// package DP.SquareBrackets;

import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, k;
        int[][] dp;
        int[] s;
        int cases = input.nextInt();
        while (cases-- > 0) {
            n = input.nextInt();
            k = input.nextInt();
            s = new int[k];
            for (int i = 0; i < k; i++) {
                s[i] = input.nextInt();
            }
            dp = new int[2 * n][n+2];
            dp[0][1] = 1;
            int start = 0;
            start += (s[start] == 1 ? 1 : 0);
            for (int i = 1; i < 2 * n; i++) {
                if ((start<k)&&(s[start] == i + 1)) {
                    dp[i][0] = 0;
                    for (int j = 1; j < n+1; j++) {
                        dp[i][j] = dp[i - 1][j - 1];
                    }
                    start++;
                } else {
                    dp[i][0] = dp[i - 1][1];
                    for (int j = 1; j < n+1; j++) {
                        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
                    }
                }
            }
            // for(int i=0;i<2*n;i++){
            //     for(int j=0;j<)
            // }
            System.out.println(dp[2*n-1][0]);
        }
    }
}