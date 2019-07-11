package codeforces.Div3.Round642.C;

import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int last = input.nextInt();
        long n,ans, start, steps;
        for (int cases = 0; cases < last; cases++) {
            n = input.nextInt();
            start = 8;
            ans = 0;
            steps = 1;
            for (steps = 1; steps <= n / 2; steps++) {
                ans += start * steps;
                start += 8;
            }
            System.out.println(ans);
        }
    }
}