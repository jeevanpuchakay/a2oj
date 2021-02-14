package Codechef.LongChallenges.June2k20.ChefSellsPriceEasy;

import java.util.*;

public class Main {
    private static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int n = input.nextInt(), k = input.nextInt();
            int ans = 0;
            for (int i = 0; i < n; i++) {
                int x = input.nextInt();
                ans += Math.max(0, x - k);
            }
            System.out.println(ans);
        }
    }
}