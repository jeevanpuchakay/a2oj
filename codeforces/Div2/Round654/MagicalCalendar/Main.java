package codeforces.Div2.Round654.MagicalCalendar;

import java.math.BigInteger;
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            long n = input.nextInt(), r = input.nextInt();
            long ans = 0;
            if (n < r) {
                ans = 1 + (n * (n - 1) + 1) / 2;
            } else if (n > r) {
                ans = (r * (r + 1)) / 2;
            } else {
                ans = 1 + ((r - 1) * r) / 2;
            }
            System.out.println(ans);
        }
        input.close();
    }
}