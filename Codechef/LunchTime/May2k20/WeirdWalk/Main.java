
package Codechef.LunchTime.May2k20.WeirdWalk;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int n = input.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = input.nextInt();
            for (int i = 0; i < n; i++)
                b[i] = input.nextInt();
            Long pos1 = new Long(0), pos2 = new Long(0), ans = new Long(0);
            for (int i = 0; i < n; i++) {
                if ((pos1.equals(pos2)) && (a[i] == b[i])) {
                    pos1 += new Long(a[i]);
                    pos2 += new Long(b[i]);
                    ans += new Long(b[i]);
                } else {
                    pos1 += new Long(a[i]);
                    pos2 += new Long(b[i]);
                }
            }
            System.out.println(ans);
        }
        input.close();
    }
}