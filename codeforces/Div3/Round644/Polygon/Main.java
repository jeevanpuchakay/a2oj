package codeforces.Div3.Round644.Polygon;

import java.util.*;

public class Main {
    public static Scanner input = new Scanner(System.in);

    public static void main(String args[]) {
        int cases = input.nextInt();
        int n;
        String[] s;
        while (cases-- > 0) {
            n = input.nextInt();
            s = new String[n];
            for (int i = 0; i < n; i++) {
                s[i] = input.next();
            }
            boolean ans = true;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (s[i].charAt(j) == '1') {
                        if ((j + 1 < n) && (s[i].charAt(j + 1) != '1') && (i + 1 < n) && (s[i + 1].charAt(j) != '1')) {
                            ans = false;
                            break;
                        }
                    }
                }
                if (!ans)
                    break;
            }
            if (ans) {
                System.out.println("YES");
            } else {
                System.out.println("NO");

            }
        }
    }
}