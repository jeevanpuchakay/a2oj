
package Codechef.Medium.SpiderManJump;

// package Codechef.Medium.SpiderManJump;

import java.util.*;
// import java.io.*;

class main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test;
        test = 1;// input.nextInt();
        int[] heights, dp;
        int n;
        // while (test-- > 0) {
        n = input.nextInt();
        heights = new int[n];
        heights[0] = input.nextInt();
        dp = new int[n];
        dp[0] = 0;
        for (int i = 1; i < n; i++) {
            heights[i] = input.nextInt();
            dp[i] = Math.abs(heights[i] - heights[i - 1])+dp[i-1];
            for (int j = 1; (i - (1 << j)) >= 0; j++) {
                dp[i] = Math.min(dp[i], Math.abs(heights[i] - heights[i - (1 << j)]) + dp[i - (1 << j)]);
            }
            // System.out.println(dp[i]);

        }
        System.out.println(dp[n - 1]);
    }
    // }
}