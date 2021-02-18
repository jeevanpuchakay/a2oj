// package codeforces.DivB.Discounts;

import java.util.*;



public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {

        int n, m, total_price = 0;
        n = input.nextInt();
        int[] prices_of_bars = new int[n];
        for (int i = 0; i < n; i++) {
            prices_of_bars[i] = input.nextInt();
            total_price += prices_of_bars[i];
        }
        m = input.nextInt();
        int[] no_of_bars = new int[m];
        for (int i = 0; i < m; i++) {
            no_of_bars[i] = input.nextInt();
        }
        Arrays.sort(prices_of_bars);
        for (int i = 0; i < m; i++) {
            System.out.println(total_price - prices_of_bars[n-no_of_bars[i]]);
        }
        input.close();
    }

    public static int modulo(int dividend) {
        while (dividend >= mod)
            dividend -= mod;
        return dividend;
    }

    public static int combination(int n, int r) {
        int ans = 1;
        for (int i = 1; i <= r; i++) {
            ans *= (n - i + 1);
            ans /= i;
        }
        return ans;
    }
}

// class Pair {
// public int first, second;

// Pair() {

// }

// Pair(int x, int y) {
// this.first = x;
// this.second = y;
// }

// }

// class PairComparator implements Comparator<Pair> {
// // sorts by first element in ascending order
// @Override
// public int compare(Pair p1, Pair p2) {
// if (p1.first == p2.first)
// return p1.second < p2.second ? 1 : -1;
// else if (p1.first < p2.first) {
// return 1;
// }
// return -1;
// }
// }
