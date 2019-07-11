
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            double n = input.nextInt(), last = input.nextInt(), current;
            int ans = 0;
            for (int i = 0; i < n - 1; i++) {
                current = input.nextInt();
                while ((((float) current) / (last)) > 2) {
                    last = 2 * last;
                    ans++;
                }
                while (((float) last / current) > 2) {
                    last = last / 2;
                    ans++;
                }
                last = current;
                // System.out.println("l " + last + " " + ans);
            }
            // System.out.println();
            System.out.println(ans);
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