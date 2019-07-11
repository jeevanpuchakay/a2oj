
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {
        int tt = input.nextInt();

        while (tt-- > 0) {
            long num = input.nextLong();

            int i = 1, n = (1 + (int) Math.floor(Math.log10(num))), ans = 9 * (n - 1);
            if (num <= 9) {
                System.out.println(num);
                continue;
            }
            long allOnes = getOnes(n);
            // System.out.println(allOnes);
            while (i <= 9 && num >= (i * allOnes)) {
                i++;
            }
            ans += (i - 1);
            System.out.println(ans);

        }
        input.close();
    }

    public static long getOnes(int n) {
        long ans = 1;
        while (n-- > 1) {
            ans *= 10;
            ans++;
        }
        return ans;
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