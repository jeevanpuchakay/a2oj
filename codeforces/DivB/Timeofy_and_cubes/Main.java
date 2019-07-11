
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {

        int n = input.nextInt();
        int[] numbers_on_cube = new int[n];
        for (int i = 0; i < n; i++) {
            numbers_on_cube[i] = input.nextInt();
        }

        int[] ans = new int[n];
        for (int i = 0; i < n / 2; i++) {
            if ((i + 1) % 2 == 1) {
                ans[i] = numbers_on_cube[n - i - 1];
                ans[n - i - 1] = numbers_on_cube[i];
            } else {
                ans[i] = numbers_on_cube[i];
                ans[n - i - 1] = numbers_on_cube[n - i - 1];
            }
        }
        if (n % 2 == 1) {
            ans[(n - 1) / 2] = numbers_on_cube[(n - 1) / 2];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
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