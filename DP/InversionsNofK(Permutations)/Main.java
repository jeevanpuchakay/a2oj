// package 

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cases = input.nextInt();
        int n, k, temp;
        int[][] ans;
        while (cases-- > 0) {
            n = input.nextInt();
            k = input.nextInt();
            ans = new int[n + 1][k + 1];
            ans[1][0] = 1;
            for (int i = 2; i <= n; i++) {
                temp = 01;
                ans[i][0] = 1;
                for (int j = 1; j <= k; j++) {
                    if (j > i - 1) {
                        temp -= ans[i - 1][j - i];
                    }
                    temp += ans[i - 1][j];
                    ans[i][j] = temp;
                }
            }
            // for (int i = 0; i <= n; i++) {
            // for (int j = 0; j <= k; j++)
            // System.out.print(ans[i][j] + " ");
            // }
            // System.out.println("");
            System.out.println(ans[n][k]);
        }
    }
}