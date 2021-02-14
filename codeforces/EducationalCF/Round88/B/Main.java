package codeforces.EducationalCF.Round88.B;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int n = input.nextInt();
            int m = input.nextInt();
            int x = input.nextInt();
            int y = input.nextInt();
            boolean[][] stone = new boolean[n][m];
            String st;
            for (int i = 0; i < n; i++) {

                st = input.next();
                for (int j = 0; j < m; j++) {
                    // System.out.println(st + " lol");
                    if (st.charAt(j) == '.') {
                        stone[i][j] = true;
                    }
                }
            }
            int[][] ans;
            int tempC = 0, ansC = 0;
            for (int i = 0; i < n; i++) {
                ans = new int[m + 1][2];
                if (stone[i][0]) {
                    ans[1][0] = x;
                    ans[1][1] = x;
                }
                for (int j = 2; j <= m; j++) {
                    if (stone[i][j - 1]) {
                        ans[j][0] = Math.min(ans[j - 1][0], ans[j - 1][1]) + x;
                        ans[j][1] = ans[j][0];
                        if (stone[i][j - 2]) {
                            ans[j][1] = Math.min(ans[j - 2][1], ans[j - 2][0]) + y;
                        }
                    } else {
                        ans[j][0] = Math.min(ans[j - 1][0], ans[j - 1][1]);
                        ans[j][1] = ans[j][0];
                    }
                }
                ansC += (Math.min(ans[m][0], ans[m][1]));
            }
            System.out.println(ansC);
        }
        input.close();
    }
}