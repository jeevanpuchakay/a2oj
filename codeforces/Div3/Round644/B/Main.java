package codeforces.Div3.Round644.B;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        int cases;
        Scanner input = new Scanner(System.in);
        cases = input.nextInt();
        int n;
        int[] strens;
        int ans;
        while (cases-- > 0) {
            ans = 0;
            n = input.nextInt();
            strens = new int[n];
            for (int i = 0; i < n; i++) {
                strens[i] = input.nextInt();
                ans = Math.max(ans, strens[i]);
            }
            Arrays.sort(strens);
            for (int i = 1; i < n; i++) {
                ans = Math.min(ans, Math.abs(strens[i] - strens[i - 1]));
            }
            System.out.println(ans);
        }
    }
}