package Codechef.LongChallenges.June2k20.IceCream;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int x, n = input.nextInt();
            int[] a = new int[3];
            boolean isit = true;
            for (int i = 0; i < n; i++) {
                x = input.nextInt();
                if (!isit)
                    continue;
                if (x == 10) {
                    a[1]++;
                    if (a[0] > 0) {
                        a[0]--;
                    } else {
                        isit = false;
                    }
                } else if (x == 15) {
                    if (a[1] > 0) {
                        a[1]--;
                    } else if (a[0] >= 2) {
                        a[0] -= 2;
                    } else {
                        isit = false;
                    }
                } else {
                    a[0]++;
                }
            }
            if (isit) {
                System.out.println("YES");
            } else {
                System.out.println("NO");

            }
        }

        input.close();
    }
}